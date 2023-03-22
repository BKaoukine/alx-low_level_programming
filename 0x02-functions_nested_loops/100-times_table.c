#include <stdio.h>
#include "main.h"
/**
 * print_times_table - function outputs the absolute value of giving number
 * @n: numbers given
 * Discription: reproduces the absolut value of number
 *
 * Return: 0 if Succes
*/
void print_times_table(int n) {
    if(n>0 && n<15)
	{
    int i, j;
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n; j++)
		{
            printf(",%-4d", i * j);
        }
        printf("\n");
    }
    }
    
}
