#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - function prints alphabets to STO
 *
 * Discription: print lowercase alphabets to the STO
 *
 * Return: 0 if Succes
*/

	int _islower(int c) {
    int r;
    if (c >= 'a' && c <= 'z') {
        r = 1;
        _putchar(r + '0');
    } else {
        r = 0;
        _putchar(r + '0');
    }
    return r;
	}

