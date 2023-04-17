## 0x00-hello_world

This directory contains several C programs that serve as an introduction to C programming.

### Files

-   `0-preprocessor`: A script that runs the C preprocessor on a file and saves the result to another file.
    -   Commands/flags used:
        -   `gcc`: GNU Compiler Collection command for compiling C programs.
        -   `-E`: specifies to run the preprocessor only, instead of compiling.
        -   `-o`: specifies the output file.
-   `1-compiler`: A script that compiles a C file and generates an executable.
    -   Commands/flags used:
        -   `gcc`: GNU Compiler Collection command for compiling C programs.
        -   `-Wall`: turns on all warnings.
        -   `-Werror`: treats warnings as errors.
        -   `-Wextra`: turns on additional warnings.
        -   `-pedantic`: ensures code is compliant with ISO C90 and ISO C99.
        -   `-o`: specifies the output file.
-   `2-assembler`: A script that generates the assembly code of a C code and saves it to a file.
    -   Commands/flags used:
        -   `gcc`: GNU Compiler Collection command for compiling C programs.
        -   `-S`: generates assembly code instead of object code.
        -   `-o`: specifies the output file.
-   `3-name`: A program that prints its own name.
    -   Syntax: `./3-name`
-   `4-puts.c`: A C program that prints a string using the `puts` function.
-   `5-printf.c`: A C program that prints a string using the `printf` function.
-   `6-size.c`: A program that prints the size of various data types on the computer it is compiled and run on.
    -   Syntax: `./6-size`
-   `100-intel`: A script that generates the assembly code (in Intel syntax) of a C code and saves it to a file.
    -   Commands/flags used:
        -   `gcc`: GNU Compiler Collection command for compiling C programs.
        -   `-S`: generates assembly code instead of object code.
        -   `-masm=intel`: specifies Intel syntax for the assembly code.
        -   `-o`: specifies the output file.
-   `101-quote.c`: A C program that prints a string to standard error using the `write` function.
    -   Syntax: `./101-quote`

### Resources

-   [What is the C Preprocessor?](https://www.geeksforgeeks.org/what-is-the-c-preprocessor/)
-   [C compiler flags](https://www.rapidtables.com/code/linux/gcc/gcc-cflags.html)
-   [What is assembly language?](https://www.tutorialspoint.com/assembly_programming/assembly_introduction.htm)
