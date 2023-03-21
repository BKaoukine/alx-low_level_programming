#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - function outputs the absolute value of giving number
 * @n: n is provided as a number
 * Discription: reproduces the absolut value of number
 *
 * Return: 0 if Succes
*/
void jack_bauer(void)
{
    int i, j;

    for (i = 0; i <= 59; i++) {
        for (j = 0; j <= 59; j++) {

            _putchar((i / 10) + 48);
            _putchar((i % 10) + 48);
            _putchar(':');
            _putchar((j / 10) + 48);
            _putchar((j % 10) + 48);
            _putchar('\n');
        }
    }
    _putchar('\n');
    return (0);
}


