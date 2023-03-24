#include <stdio.h>
/**
 * main - program for the biggest factor test
 * Discription: print biggest factor
 *
 * Return: 0 if Succes
*/
#include <stdio.h>

int main(void)
{
long numbertested = 612852475143L;
long largestfactor = 1L;
long i;

for (i = 3L; i * i <= numbertested; i += 2L)
{
if (numbertested % i == 0)
{
largestfactor = i;
numbertested /= i;
}
}

if (numbertested > largestfactor)
{
largestfactor = numbertested;
}
printf("%ld\n", largestfactor);
return (0);
}
