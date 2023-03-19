/* Online C Compiler and Editor */
#include <stdio.h>
/**
  * main - Strating Point
  *
  * Discriptions: this program prints combination of three digits
  *
  *Return: 0 for Successe
  */
int main(void)
{
    int i, b, c, e;

    for (i = 0 ; i <= 10 ; i++) {
        for (b = 0 ; b <= 10; b++) {
            for (c = b ; c <= 10 ; c++) {
                for (e = c ; e <= 10; e++) {
                    if (i != 10 && b != 10 && c != 10 && e != 10) {
                        if ( e != b) {
                            putchar('0' + i);
                            putchar('0' + b);
                            putchar(' ');
                            putchar('0' + c);
                            putchar('0' + e);
                            if (b != 8 || c != 9) {
                                putchar(',');
                            }
                        }
                    }
                }
            }
        }
    }
    putchar('\n');
    return (0);
}
