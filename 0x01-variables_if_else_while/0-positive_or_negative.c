#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
  * main - Strating point
  *
  * Discription: this function test if n a randome number is pos/nig/zero
  *
  * Return: 0 if Successe
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	} else if (n < 0)
	{
		printf("%i is negative\n", n);
	} else
	{
		printf("%i is zero\n", n);

	}
	return (0);
}
