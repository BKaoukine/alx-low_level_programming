#include<stdio.h>
/**
  * main - starting point
  *
  * Discription: this fucntion outputs the size of various types to STO
  *
  * Return: 0 for Success
  */
int main(void)
	{
		int sizeOfChar = sizeof(char);
		int sizeOfInt = sizeof(int);
		int sizeOfLongInt = sizeof(long int);
		int sizeOfLongLongInt = sizeof(long long int);
		int sizeOfFloat = sizeof(float);

		fprintf(stdout, "Size of a char: %i byte(s)\n", sizeOfChar);
		fprintf(stdout, "Size of a int: %i byte(s)\n", sizeOfInt);
		fprintf(stdout, "Size of a long int: %i byte(s)\n", sizeOfLongInt);
		fprintf(stdout, "Size of a long long int: %i byte(s)\n", sizeOfLongLongInt);
		fprintf(stdout, "Size of a float: %i byte(s)\n", sizeOfFloat);

		return (0);
	}
