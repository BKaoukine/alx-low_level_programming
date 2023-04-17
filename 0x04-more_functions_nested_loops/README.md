
# 0x04-more_functions_nested_loops

This directory contains C programs that demonstrate the use of more functions and nested loops.

## Files

-   `0-isupper.c`: A function that checks for uppercase characters.
    -   Syntax: `int _isupper(int c)`
-   `1-isdigit.c`: A function that checks for a digit (0 through 9).
    -   Syntax: `int _isdigit(int c)`
-   `2-mul.c`: A function that multiplies two integers.
    -   Syntax: `int mul(int a, int b)`
-   `3-print_numbers.c`: A function that prints the numbers from 0 to 9, followed by a new line.
    -   Syntax: `void print_numbers(void)`
-   `4-print_most_numbers.c`: A function that prints the numbers from 0 to 9, except for 2 and 4, followed by a new line.
    -   Syntax: `void print_most_numbers(void)`
-   `5-more_numbers.c`: A function that prints 10 times the numbers from 0 to 14, followed by a new line.
    -   Syntax: `void more_numbers(void)`
-   `6-print_line.c`: A function that draws a straight line in the terminal.
    -   Syntax: `void print_line(int n)`
-   `7-print_diagonal.c`: A function that draws a diagonal line in the terminal.
    -   Syntax: `void print_diagonal(int n)`
-   `8-print_square.c`: A function that prints a square, followed by a new line.
    -   Syntax: `void print_square(int size)`
-   `9-fizz_buzz.c`: A function that prints the numbers from 1 to 100, followed by a new line. But for multiples of three, it prints "Fizz" instead of the number, and for multiples of five, it prints "Buzz". For multiples of both three and five, it prints "FizzBuzz".
    -   Syntax: `void fizz_buzz(void)`
-   `10-print_triangle.c`: A function that prints a triangle, followed by a new line.
    -   Syntax: `void print_triangle(int size)`

## Usage

To use any of the functions in your own code, include the corresponding header file in your program and call the function using the correct syntax.

For example, to use the `_isupper()` function in your program:

    `#include "main.h"
    #include <stdio.h>
    
    int main(void) {
        int c = 'A';
        int result = _isupper(c);
        printf("%d\n", result);
        return (0);
    }` 

To compile the program, you can use the `gcc` command followed by the name of your program and the name of the `.c` file containing the function you want to use, as well as the `-o` flag to specify the output file name.

    `gcc -Wall -Werror -Wextra -pedantic main.c 0-isupper.c -o my_program`

 

You can then run the program using `./my_program`.

## Resources

-   [Nested Loops in C](https://www.geeksforgeeks.org/nested-loops-in-c/)
-   [Functions in C](https://www.geeksforgeeks.org/functions-in-c/)
-   [Function Prototypes in C](https://www.geeksforgeeks.org/function-prototype-in-c/)
-   [Header Files in C](https://www.geeksforgeeks.org/header-files-in-c-cpp-and-its-uses/)
