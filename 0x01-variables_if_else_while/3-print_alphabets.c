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
{	int i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXZ\n";

	for (i = 0; i <= 51; i++)
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
