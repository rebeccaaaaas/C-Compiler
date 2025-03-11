; ModuleID = 'main'
source_filename = "main"

@array = private global [10000 x i32] zeroinitializer
@0 = private unnamed_addr constant [3 x i8] c"%d\00", align 1
@1 = private unnamed_addr constant [3 x i8] c"%d\00", align 1
@.str = constant [4 x i8] c"%d\0A\00"

declare i32 @printf(i8*, ...)

declare i32 @scanf(...)

define i32 @quick_sort(i32 %left, i32 %right) {
entrypoint:
  %x = alloca i32, align 4
  %j = alloca i32, align 4
  %i = alloca i32, align 4
  %icmptmp = icmp slt i32 %left, %right
  %ifCond = icmp ne i1 %icmptmp, false
  br i1 %ifCond, label %then, label %else

then:                                             ; preds = %entrypoint
  store i32 %left, i32* %i, align 4
  store i32 %right, i32* %j, align 4
  %tmpvar = load i32, i32* %i, align 4
  %tmpvar1 = getelementptr inbounds [10000 x i32], [10000 x i32]* @array, i32 0, i32 %tmpvar
  %tmpvar2 = load i32, i32* %tmpvar1, align 4
  store i32 %tmpvar2, i32* %x, align 4
  br label %cond

else:                                             ; preds = %entrypoint
  br label %merge

merge:                                            ; preds = %else, %afterLoop
  ret i32 0

cond:                                             ; preds = %merge53, %then
  %tmpvar3 = load i32, i32* %i, align 4
  %tmpvar4 = load i32, i32* %j, align 4
  %icmptmp5 = icmp slt i32 %tmpvar3, %tmpvar4
  %whileCond = icmp ne i1 %icmptmp5, false
  br i1 %whileCond, label %loop, label %afterLoop

loop:                                             ; preds = %cond
  br label %cond6

afterLoop:                                        ; preds = %cond
  %tmpvar61 = load i32, i32* %i, align 4
  %tmpvar62 = getelementptr inbounds [10000 x i32], [10000 x i32]* @array, i32 0, i32 %tmpvar61
  %tmpvar63 = load i32, i32* %x, align 4
  store i32 %tmpvar63, i32* %tmpvar62, align 4
  %tmpvar64 = load i32, i32* %i, align 4
  %subtmpi65 = sub i32 %tmpvar64, 1
  %calltmp = call i32 @quick_sort(i32 %left, i32 %subtmpi65)
  %tmpvar66 = load i32, i32* %i, align 4
  %addtmpi67 = add i32 %tmpvar66, 1
  %calltmp68 = call i32 @quick_sort(i32 %addtmpi67, i32 %right)
  br label %merge

cond6:                                            ; preds = %loop7, %loop
  %tmpvar9 = load i32, i32* %i, align 4
  %tmpvar10 = load i32, i32* %j, align 4
  %icmptmp11 = icmp slt i32 %tmpvar9, %tmpvar10
  %tmpvar12 = load i32, i32* %j, align 4
  %tmpvar13 = getelementptr inbounds [10000 x i32], [10000 x i32]* @array, i32 0, i32 %tmpvar12
  %tmpvar14 = load i32, i32* %tmpvar13, align 4
  %tmpvar15 = load i32, i32* %x, align 4
  %icmptmp16 = icmp sgt i32 %tmpvar14, %tmpvar15
  %tmpAnd = and i1 %icmptmp11, %icmptmp16
  %whileCond17 = icmp ne i1 %tmpAnd, false
  br i1 %whileCond17, label %loop7, label %afterLoop8

loop7:                                            ; preds = %cond6
  %tmpvar18 = load i32, i32* %j, align 4
  %subtmpi = sub i32 %tmpvar18, 1
  store i32 %subtmpi, i32* %j, align 4
  br label %cond6

afterLoop8:                                       ; preds = %cond6
  %tmpvar19 = load i32, i32* %i, align 4
  %tmpvar20 = load i32, i32* %j, align 4
  %icmptmp21 = icmp slt i32 %tmpvar19, %tmpvar20
  %ifCond22 = icmp ne i1 %icmptmp21, false
  br i1 %ifCond22, label %then23, label %else24

then23:                                           ; preds = %afterLoop8
  %tmpvar26 = load i32, i32* %i, align 4
  %tmpvar27 = getelementptr inbounds [10000 x i32], [10000 x i32]* @array, i32 0, i32 %tmpvar26
  %tmpvar28 = load i32, i32* %j, align 4
  %tmpvar29 = getelementptr inbounds [10000 x i32], [10000 x i32]* @array, i32 0, i32 %tmpvar28
  %tmpvar30 = load i32, i32* %tmpvar29, align 4
  store i32 %tmpvar30, i32* %tmpvar27, align 4
  %tmpvar31 = load i32, i32* %i, align 4
  %addtmpi = add i32 %tmpvar31, 1
  store i32 %addtmpi, i32* %i, align 4
  br label %merge25

else24:                                           ; preds = %afterLoop8
  br label %merge25

merge25:                                          ; preds = %else24, %then23
  br label %cond32

cond32:                                           ; preds = %loop33, %merge25
  %tmpvar35 = load i32, i32* %i, align 4
  %tmpvar36 = load i32, i32* %j, align 4
  %icmptmp37 = icmp slt i32 %tmpvar35, %tmpvar36
  %tmpvar38 = load i32, i32* %i, align 4
  %tmpvar39 = getelementptr inbounds [10000 x i32], [10000 x i32]* @array, i32 0, i32 %tmpvar38
  %tmpvar40 = load i32, i32* %tmpvar39, align 4
  %tmpvar41 = load i32, i32* %x, align 4
  %icmptmp42 = icmp slt i32 %tmpvar40, %tmpvar41
  %tmpAnd43 = and i1 %icmptmp37, %icmptmp42
  %whileCond44 = icmp ne i1 %tmpAnd43, false
  br i1 %whileCond44, label %loop33, label %afterLoop34

loop33:                                           ; preds = %cond32
  %tmpvar45 = load i32, i32* %i, align 4
  %addtmpi46 = add i32 %tmpvar45, 1
  store i32 %addtmpi46, i32* %i, align 4
  br label %cond32

afterLoop34:                                      ; preds = %cond32
  %tmpvar47 = load i32, i32* %i, align 4
  %tmpvar48 = load i32, i32* %j, align 4
  %icmptmp49 = icmp slt i32 %tmpvar47, %tmpvar48
  %ifCond50 = icmp ne i1 %icmptmp49, false
  br i1 %ifCond50, label %then51, label %else52

then51:                                           ; preds = %afterLoop34
  %tmpvar54 = load i32, i32* %j, align 4
  %tmpvar55 = getelementptr inbounds [10000 x i32], [10000 x i32]* @array, i32 0, i32 %tmpvar54
  %tmpvar56 = load i32, i32* %i, align 4
  %tmpvar57 = getelementptr inbounds [10000 x i32], [10000 x i32]* @array, i32 0, i32 %tmpvar56
  %tmpvar58 = load i32, i32* %tmpvar57, align 4
  store i32 %tmpvar58, i32* %tmpvar55, align 4
  %tmpvar59 = load i32, i32* %j, align 4
  %subtmpi60 = sub i32 %tmpvar59, 1
  store i32 %subtmpi60, i32* %j, align 4
  br label %merge53

else52:                                           ; preds = %afterLoop34
  br label %merge53

merge53:                                          ; preds = %else52, %then51
  br label %cond
}

define i32 @main() {
entrypoint:
  %right = alloca i32, align 4
  %left = alloca i32, align 4
  %N = alloca i32, align 4
  %i = alloca i32, align 4
  %scanf = call i32 (...) @scanf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @0, i32 0, i32 0), i32* %N)
  store i32 0, i32* %i, align 4
  br label %cond

cond:                                             ; preds = %loop, %entrypoint
  %tmpvar = load i32, i32* %i, align 4
  %tmpvar1 = load i32, i32* %N, align 4
  %icmptmp = icmp slt i32 %tmpvar, %tmpvar1
  %whileCond = icmp ne i1 %icmptmp, false
  br i1 %whileCond, label %loop, label %afterLoop

loop:                                             ; preds = %cond
  %tmpvar2 = load i32, i32* %i, align 4
  %tmpvar3 = getelementptr inbounds [10000 x i32], [10000 x i32]* @array, i32 0, i32 %tmpvar2
  %scanf4 = call i32 (...) @scanf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @1, i32 0, i32 0), i32* %tmpvar3)
  %tmpvar5 = load i32, i32* %i, align 4
  %addtmpi = add i32 %tmpvar5, 1
  store i32 %addtmpi, i32* %i, align 4
  br label %cond

afterLoop:                                        ; preds = %cond
  store i32 0, i32* %left, align 4
  %tmpvar6 = load i32, i32* %N, align 4
  %subtmpi = sub i32 %tmpvar6, 1
  store i32 %subtmpi, i32* %right, align 4
  %tmpvar7 = load i32, i32* %left, align 4
  %tmpvar8 = load i32, i32* %right, align 4
  %calltmp = call i32 @quick_sort(i32 %tmpvar7, i32 %tmpvar8)
  store i32 0, i32* %i, align 4
  br label %cond9

cond9:                                            ; preds = %loop10, %afterLoop
  %tmpvar12 = load i32, i32* %i, align 4
  %tmpvar13 = load i32, i32* %right, align 4
  %icmptmp14 = icmp sle i32 %tmpvar12, %tmpvar13
  %whileCond15 = icmp ne i1 %icmptmp14, false
  br i1 %whileCond15, label %loop10, label %afterLoop11

loop10:                                           ; preds = %cond9
  %tmpvar16 = load i32, i32* %i, align 4
  %tmpvar17 = getelementptr inbounds [10000 x i32], [10000 x i32]* @array, i32 0, i32 %tmpvar16
  %tmpvar18 = load i32, i32* %tmpvar17, align 4
  %printf = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i32 0, i32 0), i32 %tmpvar18)
  %tmpvar19 = load i32, i32* %i, align 4
  %addtmpi20 = add i32 %tmpvar19, 1
  store i32 %addtmpi20, i32* %i, align 4
  br label %cond9

afterLoop11:                                      ; preds = %cond9
  ret i32 0
}
