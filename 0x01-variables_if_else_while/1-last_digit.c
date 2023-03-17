#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
  * main - Starting point
  *
  * Discription: this program get last digit of a number and run if statment on it
  *
  * Return: 0 for Successe
  */
int main(void)
{
	int n , lastDigit;
    
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n%10;
	if (lastDigit>5)
	{
	    printf("Last digit of %i is %i and is greater than 5",n,lastDigit);
	} else if (lastDigit == 0)
	{
	    printf("Last digit of %i is %i and is 0",n,lastDigit);
	} else if (lastDigit<6 && lastDigit!=0)
	{
	    printf("Last digit of %i is %i and is less than 6 and not 0",n,lastDigit);
	}
	
	return (0);
}
