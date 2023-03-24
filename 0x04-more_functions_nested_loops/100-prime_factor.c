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
long long numbertested = 612852475143LL;
long long largestfactor = 1LL;

for (long long i = 3LL; i * i <= numbertested; i += 2LL)
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
printf("%lld\n", largestfactor);
return (0);
}
