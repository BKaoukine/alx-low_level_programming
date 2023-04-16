
# 0x0C-more_malloc_free

This directory contains C programs that demonstrate the use of dynamic memory allocation in C programming language using `malloc`, `calloc`, `realloc`, and `free` functions.

Here is a brief description of each file in the directory:

-   **0-malloc_checked.c** - This program allocates memory using `malloc` and checks if the allocation was successful.
    
    Commands and Flags used:
    
    `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-malloc_checked.c -o a.out` to compile the program.
    
-   **1-string_nconcat.c** - This program concatenates two strings using `malloc`.
    
    Commands and Flags used:
    
    `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-string_nconcat.c -o a.out` to compile the program.
    
-   **2-calloc.c** - This program allocates memory using `calloc`.
    
    Commands and Flags used:
    
    `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-calloc.c -o a.out` to compile the program.
    
-   **3-array_range.c** - This program creates an array of integers.
    
    Commands and Flags used:
    
    `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-array_range.c -o a.out` to compile the program.
  
  
Note: Some files have a main.c file, which contains the main function used for testing the program. To compile these programs, we need to include both the main.c file and the relevant .c file.
