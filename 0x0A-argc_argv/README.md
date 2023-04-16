
# 0x0A-argc_argv

This directory contains C programs that use the argc and argv arguments in the main function.

## Files

### 0-whatsmyname.c

This program prints its own name, followed by a new line.

#### Compilation

bash

`gcc -Wall -pedantic -Werror -Wextra 0-whatsmyname.c -o mynameis` 

#### Usage

bash

`./mynameis` 

### 1-args.c

This program prints the number of arguments passed to it, followed by a new line. It also prints all the arguments, one per line.

#### Compilation

bash

`gcc -Wall -pedantic -Werror -Wextra 1-args.c -o args` 

#### Usage

bash

`./args arg1 arg2 arg3` 

### 2-args.c

This program prints all arguments it receives, one argument per line. It also prints the number of arguments passed to it.

#### Compilation

bash

`gcc -Wall -pedantic -Werror -Wextra 2-args.c -o args` 

#### Usage

bash

`./args arg1 arg2 arg3` 

### 3-mul.c

This program multiplies two numbers passed as arguments to the program.

#### Compilation

bash

`gcc -Wall -pedantic -Werror -Wextra 3-mul.c -o mul` 

#### Usage

bash

`./mul 2 3` 

This will output:

`6` 

### 4-add.c

This program adds positive numbers passed as arguments to the program.

#### Compilation

bash

`gcc -Wall -pedantic -Werror -Wextra 4-add.c -o add` 

#### Usage

bash

`./add 1 2 3` 

This will output:

`6` 

If no number is passed, the program will output `0`.

### main.h

This header file contains the prototypes of all the functions used in the programs of this directory.
