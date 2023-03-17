#include <stdio.h>

/* Other headers goes here */

/**
  * main - Starting point
  *
  * Discription:  this programm prints the alphabets in lowercase
  *
  * Return: 0 for Successe
  */
int main(void)
{
	int n = 0;
	int i, b;
	char alphabet[] = "abcdef\n";

	for (b = 0; b <= 9; b++)
	{
		putchar('0' + n);
	}
	for (i = 0; i <= 7; i++)
	{
		putchar(alphabet[i]);
	}
		/**
		 *char alphabets;
		 *for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		 *{
		 *putchar(alphabets);
		 *}
		 */
	return (0);
}
