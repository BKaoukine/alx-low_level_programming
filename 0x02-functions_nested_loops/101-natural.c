#include <stdio.h>
/**
 * main - function outputs the sum of 3 and 5 multiple
 *
 * Discription: sum of multiples of 3 and 5
 *
 * Return: 0 if Succes
*/
int main(void)
{
int i, sum = 0;

for (i = 1; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
printf("%d\n", sum);
return (0);
}
