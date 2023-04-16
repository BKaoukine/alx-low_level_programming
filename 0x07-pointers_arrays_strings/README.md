
# 0x07-pointers_arrays_strings

This directory contains C programs that further explore pointers, arrays, and strings. Here's a brief explanation of each file:

## 0-memset.c

This program sets the first n bytes of the memory area pointed to by s to the specified byte.

### Functions and Syscalls Used:

`memset()` - sets a block of memory to a specified value.

## 1-memcpy.c

This program copies n bytes from memory area src to memory area dest.

### Functions and Syscalls Used:

`memcpy()` - copies a block of memory to another location.

## 2-strchr.c

This program locates a character in a string.

### Functions and Syscalls Used:

`strchr()` - locates the first occurrence of a character in a string.

## 3-strspn.c

This program gets the length of a prefix substring.

### Functions and Syscalls Used:

`strspn()` - gets the length of the initial segment of a string which consists entirely of characters contained in another given string.

## 4-strpbrk.c

This program searches a string for any of a set of bytes.

### Functions and Syscalls Used:

`strpbrk()` - locates the first occurrence in the string s of any of the bytes in the string accept.

## 5-strstr.c

This program locates a substring.

### Functions and Syscalls Used:

`strstr()` - locates the first occurrence of the substring needle in the string haystack.

## 6-print_chessboard.c

This program prints the chessboard.

### Functions and Syscalls Used:

None.

### Syntax

To compile and run these programs, you can use the following commands:

#### Compilation

`gcc -Wall -Werror -Wextra -pedantic main.c file_name.c -o output_file_name`

#### Execution

`./output_file_name`
