OBJS = grammar.o lexical.o code_gen.o ast.o main.o
CC = /usr/local/bin/clang++
LLVM_AS = /usr/local/Cellar/llvm@12/12.0.1_1/bin/llvm-as 
LLI = /usr/local/Cellar/llvm@12/12.0.1_1/bin/lli

LLVM_INCLUDE = -I /usr/local/Cellar/llvm@12/12.0.1_1/include
LLVM_LIBS = -L /usr/local/Cellar/llvm@12/12.0.1_1/lib
LD_FLAGS = -lpthread -ldl -lz -lncurses -rdynamic -L/usr/local/lib -ljsoncpp

.PHONY: build clean test

build:
	flex -o lexical.cpp lexical.l
	bison -d -o grammar.cpp grammar.y
	$(CC) -g $(LLVM_INCLUDE) $(LLVM_LIBS) $(LD_FLAGS) -lLLVM ./*.cpp -o parse

test:
	cat ../test/test1/if.cmm | ./parse > ../test/test1/test1.ll
	llvm-as ../test/test1/test1.ll -o ../test/test1/test1.bc	
	$(CC) ../test/test1/test1.bc -o ../test/test1/test1.out

	cat ../test/test2/datatype.cmm | ./parse > ../test/test2/test2.ll
	llvm-as ../test/test2/test2.ll -o ../test/test2/test2.bc	
	$(CC) ../test/test2/test2.bc -o ../test/test2/test2

	cat ../test/test3/quicksort.cmm | ./parse > ../test/test3/test3.ll
	llvm-as ../test/test3/test3.ll -o ../test/test3/test3.bc	
	$(CC) ../test/test3/test3.bc -o ../test/test3/test3

	cat ../test/test4/datatype.cmm | ./parse > ../test/test/test4.ll
	llvm-as ../test/test4/test4.ll -o ../test/test4/test4.bc	
	$(CC) ../test/test4/test4.bc -o ../test/test4/test4

temp_test:
	cat ../test/test0.c | ./parse > ../test/test0.ll
	llvm-as ../test/test0.ll -o ../test/test0.bc
	$(CC) ../test/test0.bc -o ../test/test0

clean:
	$(RM) -rf $(OBJS) grammar.cpp grammar.hpp parse lexical.cpp 
	$(RM) -f ../test/*.ll ../test/*.bc ../test/test0/test0 ../test/test1/test1 ../test/test2/test2 ../test/test3/test3 ../test/test4/test4
	$(RM) -f ../test/test1/*.bc ../test/test1/*.ll ../test/test2/*.bc ../test/test2/*.ll ../test/test3/*.bc ../test/test3/*.ll ../test/test4/*.bc ../test/test4/*.ll