# C-Compiler

A class C language compiler implementation based on Flex, Bison, and LLVM.

## Overview

This project implements a C-like language compiler that can parse and compile a subset of C language syntax into machine code using LLVM. The compiler follows the standard compilation pipeline: lexical analysis, syntax analysis, semantic analysis, IR generation, and target code generation.

## Features

### Supported Data Types
- Basic types: int, float, char, bool, void, double
- Complex types: arrays and structures

### Supported C Syntax
- Expressions: parentheses `()`, array subscripts `[]`, basic arithmetic operations (`+`, `-`, `*`, `/`, `%`), logical operations (`||`, `&&`, `!`)
- Statements: assignment, if-else, while, for, do-while, switch-case, continue, break
- Function calls (requires declaration before use)
- Function declaration and definition
- External function linking

## Project Structure

```
c-compiler/
├── src/               # Source code
│   ├── ast.cpp        # Abstract Syntax Tree implementation
│   ├── ast.h          # AST header file
│   ├── code_gen.cpp   # Code generation using LLVM
│   ├── code_gen.h     # Code generation header
│   ├── grammar.cpp    # Generated from grammar.y by Bison
│   ├── grammar.hpp    # Grammar header file
│   ├── grammar.y      # Bison syntax definition file
│   ├── lexical.cpp    # Generated from lexical.l by Flex
│   ├── lexical.l      # Flex lexical definition file
│   ├── main.cpp       # Main entry point
│   ├── Makefile       # Build instructions
│   └── type.h         # Type definitions
├── test/              # Test cases
│   ├── test1/         # Test suite 1
│   ├── test2/         # Test suite 2
│   └── test3/         # Test suite 3
└── README.md          # This file
```

## Prerequisites

- Flex & Bison: For generating lexical analyzer and parser
- LLVM-14: For semantic analysis, IR generation, and code generation
- CMake: For building the project

## Building the Project

1. Create a build directory and generate build files:
   ```bash
   cmake -S . -B ./build
   ```

2. Build the project:
   ```bash
   cd ./build
   make
   ```

3. After successful compilation, you'll find the `C-Compiler-main` executable in the build directory.

## Usage

Run the compiler with the following options:

```bash
./C-Compiler -i ./test.c -o test.o -o1 -l
```

Options:
- `-i <file>`: Input C source file
- `-o <file>`: Output object file
- `-o1`: Generate optimization level 1
- `-l`: Print LLVM IR to stdout

## Linking and Running Compiled Code

You can link the generated object file using gcc:

```bash
gcc ./test.o -o test
./test
```

## Implementation Details

### 1. Lexical Analysis

The lexical analyzer is implemented using Flex. It scans the input source code character by character and identifies tokens such as keywords, identifiers, operators, etc.

### 2. Syntax Analysis

The syntax analyzer is implemented using Bison. It takes the token stream from the lexical analyzer and builds an Abstract Syntax Tree (AST) according to the C language grammar.

### 3. Semantic Analysis and IR Generation

The semantic analyzer traverses the AST and performs type checking and scope analysis. It then generates LLVM Intermediate Representation (IR) code.

### 4. AST Visualization

The project includes a feature to visualize the AST. The visualization workflow is:
1. Generate AST
2. Recursively call the `getJson` method on all nodes
3. Embed the JSON data in an HTML file
4. Open the HTML file to see the AST visualization

### 5. Code Generation

The target code generator translates LLVM IR to machine code for the target platform.

## Examples

Basic example:

```c
int printf(char ptr, ...);

int main() {
    int result = 5 + 3 * 2;
    printf("Result: %d\n", result);
    return 0;
}
```

## License

This project is part of a school assignment and is for educational purposes only.

## Acknowledgments

This project was completed as part of the Compiler Principles course under the guidance of Professor Feng Yan (冯雁) at Zhejiang University.