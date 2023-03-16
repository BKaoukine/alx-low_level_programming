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

		printf("Size of a char: %i byte(s)\n", sizeOfChar);
		printf("Size of an int: %i byte(s)\n", sizeOfInt);
		printf("Size of a long int: %i byte(s)\n", sizeOfLongInt);
		printf("Size of a long long int: %i byte(s)\n", sizeOfLongLongInt);
		printf("Size of a float: %i byte(s)\n", sizeOfFloat);

		return (0);
	}
