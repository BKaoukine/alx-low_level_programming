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
    int result;
    if(c >= 'a' && c <= 'z') {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}


