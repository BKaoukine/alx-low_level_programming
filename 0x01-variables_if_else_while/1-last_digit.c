#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
  * main - Starting point
  *
  * Discription: check last digit of a number and run if statment on it
  *
  * Return: 0 for Successe
  */
int main(void)
{
	int n, lDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lDigit = n % 10;
		if (lDigit > 5)
		{
			printf("Last digit of %i is %i and is greater than 5\n", n, lDigit);
		} else if (lDigit == 0)
		{
			printf("Last digit of %i is %i and is 0\n", n, lDigit);
		} else if (lDigit < 6 && lDigit != 0)
		{
			printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lDigit);
		}
	return (0);
}
