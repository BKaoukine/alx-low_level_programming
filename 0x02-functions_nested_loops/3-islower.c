#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - function prints alphabets to STO
 *
 * Discription: print lowercase alphabets to the STO
 *
 * Return: 0 if Succes
*/
int _islower(int c){
	if(_islower(c) > 0){
		return(1);
	}else{
		return(0);
	}
  	r = _islower('H');
    putchar(r + '0');
    r = _islower('o');
    putchar(r + '0');
    r = _islower(108);
    putchar(r + '0');
    putchar('\n');
    return (0);
}
