#include <stdio.h>

/* Other headers goes here */

/**
  * main - Starting point
  *
  * Discription:  this programm prints numbers from base 10
  *
  * Return: 0 for Successe
  */
int main(void)
{
	int i = 0;
	char newLine = '\n';

	while (i <= 9)
	{
		putchar('0', i);
		i++;
	}
		/**
		 *char alphabets;
		 *for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		 *{
		 *putchar(alphabets);
		 *}
		 */
	putchar(newLine);
	return (0);
}
