#include <stdio.h>
/**
 * main - program for the FizzBuzz test
 * Discription: print Fizz or Buzz or both depanding on mutliplier
 *
 * Return: 0 if Succes
*/
int main(void)
{
int i, isMulti3, isMulti5;

for (i = 1 ; i <= 100; i++)
{
isMulti3 = i % 3;
isMulti5 = i % 5;
if (isMulti3 == 0 && isMulti5 == 0)
{
printf("FizzBuzz ");
}
else if (isMulti3 == 0)
{
printf("Fizz ");
}
else if (isMulti5 == 0)
{
printf("Buzz ");
}
else
printf("%i ", i);
}
printf("\n");
return (0);
}
