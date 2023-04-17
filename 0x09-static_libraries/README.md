
# 0x09-static_libraries

In this directory, you'll find C programs that demonstrate the creation and usage of static libraries. Static libraries are collections of object files that are linked with a program at compile time, resulting in a single executable file.

## Files

Below is a list of all the files in this directory, along with a brief description of what each file does:

`libmy.a`

`create_static_lib.sh`

A shell script that creates a static library called liball.a from all the .c files in the current directory.

## Compilation

To compile a C program with a static library, you need to follow these steps:

1.  Create the static library by running the command `ar -rc libname.a file1.o file2.o ...`, replacing `libname.a` with the name you want to give your library and `file1.o file2.o ...` with the object files you want to include in the library. In this directory, you can create a static library called `libmy.a` by running the command `ar -rc libmy.a *.o`.
2.  Compile your C program with the library by adding the option `-L.` (to specify the current directory as the location of the library) and `-lname` (to link with the library called `libname.a`). For example, if you have a file called `main.c` that uses functions from `libmy.a`, you can compile it by running the command `gcc -Wall -pedantic -Werror -Wextra -L. -lmy main.c -o program_name`.

## Usage

To use the functions from a static library in your C program, you need to include the header file that declares those functions (`*.h`). In this directory, you can include the `main.h` header file to use the functions from `libmy.a`.

## Credits

All files in this directory were created by [BRAHIM KAOUKINE](https://github.com/BKaoukine) for the ALX Low-Level Programming curriculum.
