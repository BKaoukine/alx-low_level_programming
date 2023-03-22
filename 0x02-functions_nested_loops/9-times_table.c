#include <stdio.h>
#include "main.h"
/**
 * times_table - function outputs the absolute value of giving number
 * 
 * Discription: reproduces the absolut value of number
 *
 * Return: 0 if Succes
*/
void times_table(void)
{
/*
Numbers must be separated by a comma, followed by a space
Numbers should be printed in order
The first printed number should be the number passed to your function
The last printed number should be 98
You are allowed to use the standard library
*/
int i;
		        for (i = 0; i <= 9; i++)
            {
                int multip = 0;
                putchar('0' + multip);
                if(i != 9)
                {
                putchar(',');
                putchar(' ');
				putchar(' ');
                }
            }
            putchar('\n');
            for (i = 0; i <= 9; i++)
            {
                int multip = i;
                putchar('0' + multip);
                if(i != 9)
                {
                putchar(',');
                putchar(' ');
				putchar(' ');
                }
            }
            putchar('\n');
            for (i = 0; i <= 9; i++)
            {
                int multip = i*2;
                
                if (multip < 9){
                    putchar('0' + (multip));
                }
                else{
                putchar('0' + (multip/10));
                putchar('0' + (multip%10));
                }
                if(i != 9)
                {
                putchar(',');
                putchar(' ');
                }
            }
             putchar('\n');
            for (i = 0; i <= 9; i++)
            {
                int multip = i*3;
                
                if (multip <= 9){
                    putchar('0' + (multip));
                }
                else{
                putchar('0' + (multip/10));
                putchar('0' + (multip%10));
                }
                if(i != 9)
                {
                putchar(',');
                putchar(' ');
                }
            }
             putchar('\n');
            for (i = 0; i <= 9; i++)
            {
                int multip = i*4;
                
                if (multip <= 9){
                    putchar('0' + (multip));
                }
                else{
                putchar('0' + (multip/10));
                putchar('0' + (multip%10));
                }
                if(i != 9)
                {
                putchar(',');
                putchar(' ');
                }
            }
             putchar('\n');
            for (i = 0; i <= 9; i++)
            {
                int multip = i*5;
                
                if (multip <= 9){
                    putchar('0' + (multip));
                }
                else{
                putchar('0' + (multip/10));
                putchar('0' + (multip%10));
                }
                if(i != 9)
                {
                putchar(',');
                putchar(' ');
                }
            }
             putchar('\n');
            for (i = 0; i <= 9; i++)
            {
                int multip = i*6;
                
                if (multip <= 9){
                    putchar('0' + (multip));
                }
                else{
                putchar('0' + (multip/10));
                putchar('0' + (multip%10));
                }
                if(i != 9)
                {
                putchar(',');
                putchar(' ');
                }
            }
             putchar('\n');
            for (i = 0; i <= 9; i++)
            {
                int multip = i*7;
                
                if (multip <= 9){
                    putchar('0' + (multip));
                }
                else{
                putchar('0' + (multip/10));
                putchar('0' + (multip%10));
                }
                if(i != 9)
                {
                putchar(',');
                putchar(' ');
                }
            }
             putchar('\n');
            for (i = 0; i <= 9; i++)
            {
                int multip = i*8;
                
                if (multip <= 9){
                    putchar('0' + (multip));
                }
                else{
                putchar('0' + (multip/10));
                putchar('0' + (multip%10));
                }
                if(i != 9)
                {
                putchar(',');
                putchar(' ');
                }
            }
             putchar('\n');
            for (i = 0; i <= 9; i++)
            {
                int multip = i*9;
                
                if (multip <= 9){
                    putchar('0' + (multip));
                }
                else{
                putchar('0' + (multip/10));
                putchar('0' + (multip%10));
                }
                if(i != 9)
                {
                putchar(',');
                putchar(' ');
                }
            }

}


