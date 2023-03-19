/* Online C Compiler and Editor */
#include <stdio.h>
/**
  * main - Strating Point
  *
  * Discriptions: this program prints combination of three digits
  *
  *Return: 0 for Successe
  */
#include <stdio.h>

int main(void)
{
    int i, j, k, l;

    for (i = 0; i <= 99; i++) {
        for (j = i; j <= 99; j++) {
            k = i % 10;
            l = j % 10;
            i /= 10;
            j /= 10;
            if (i != 10 && j != 10 && i != l && j != k) {
                putchar('0' + i);
                putchar('0' + k);
                putchar(' ');
                putchar('0' + j);
                putchar('0' + l);
                if (k != 8 || l != 8) {
                    putchar(',');
                    putchar(' ');
                }
            }
            i *= 10;
            i += k;
            j *= 10;
            j += l;
        }
    }
    putchar('\n');
    return 0;
}
