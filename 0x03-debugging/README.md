
# 0x03-debugging

This directory contains C programs with bugs that need to be debugged. The task is to debug these programs to get the expected output.

## Files

### 0-main.c

This file contains a C program that tests whether a function prints the correct output.

**Function prototype:** `void positive_or_negative(int i);`

**Syntax:** `./a.out [number]`

### 1-main.c

This file contains a C program that tests whether a function prints the correct output.

**Function prototype:** `void print_remaining_days(int month, int day, int year);`

**Syntax:** `./a.out [month] [day] [year]`

### 2-largest_number.c

This file contains a C program that finds and prints the largest of three integers.

### 3-print_remaining_days.c

This file contains a C program that converts a date to the day of year and prints it.

**Function prototype:** `int convert_day(int month, int day);`

### holberton.h

This is the header file for the C programs in this directory. It contains function prototypes and macro definitions.

## Resources

-   [Debugging in C](https://www.tutorialspoint.com/debugging-in-c)
-   [Using GDB Debugger](https://www.thegeekstuff.com/2010/03/debug-c-program-using-gdb)

## How to use

1.  Clone the repository to your local machine.
2.  Navigate to the `0x03-debugging` directory.
3.  Compile the C program you want to test, e.g. `gcc -Wall -pedantic -Werror -Wextra 0-main.c`.
4.  Run the compiled program with the required arguments, e.g. `./a.out [number]`.
5.  Check the output to see if it matches the expected output.
6.  Debug the program as necessary.

## Notes

-   Each file contains detailed comments explaining the errors and how to fix them.
-   Debugging may involve using a debugger such as GDB, printing debug messages to the console, or analyzing the code to identify logical errors.
