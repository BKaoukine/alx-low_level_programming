# 0x0B-malloc_free

This directory contains C programs that demonstrate the use of dynamic memory allocation in C programming language using `malloc` and `free` functions.

Here is a brief description of each file in the directory:

## 0-create_array.c

This program creates an array of chars, and initializes it with a specific char.
`char *create_array(unsigned int size, char c);`

**Commands and Flags used:**

-   `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-create_array.c -o a.out` to compile the program

## 1-strdup.c

This program duplicates a string using `malloc`.
`char *_strdup(char *str);`

**Commands and Flags used:**

-   `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strdup.c -o a.out` to compile the program

## 2-str_concat.c

This program concatenates two strings using `malloc`.
`char *str_concat(char *s1, char *s2);`

**Commands and Flags used:**

-   `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-str_concat.c -o a.out` to compile the program

## 3-alloc_grid.c

This program allocates a 2D array using `malloc`.
`int **alloc_grid(int width, int height);`

**Commands and Flags used:**

-   `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-alloc_grid.c -o a.out` to compile the program

## 4-free_grid.c

This program frees a 2D array created by `alloc_grid()`.
`void free_grid(int **grid, int height);`

**Commands and Flags used:**

-   `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-alloc_grid.c 4-free_grid.c -o a.out` to compile the program

## 100-argstostr.c

This program concatenates all the arguments of the program.
`char *argstostr(int ac, char **av);`

**Commands and Flags used:**

-   `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-argstostr.c -o a.out` to compile the program

## 100-strtow.c

This program splits a string into words.

**Commands and Flags used:**

-   `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-strtow.c -o a.out` to compile the program

Note: Some files have a `main.c` file, which contains the main function used for testing the program. To compile these programs, we need to include both the `main.c` file and the relevant `.c` file.
