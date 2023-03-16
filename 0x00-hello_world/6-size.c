#include<stdio.h>
/**
  *main - starting point
  *
  *Discription : this fucntion outputs the size of various types to STO
  *
  *Return : 0 for Success
  */
int main(void)
	{
		int sizeOfChar = sizeof(char);
		int sizeOfInt = sizeof(int);
		int sizeOfLongInt = sizeof(long int);
		int sizeOfLongLongInt = sizeof(long long int);
		int sizeOfFloat = sizeof(float);

		printf("Size of a char: %i byte(s)", sizeOfChar);
		printf("Size of a int: %i byte(s)", sizeOfInt);
		printf("Size of a long int: %i byte(s)", sizeOfLongInt);
		printf("Size of a long long int: %i byte(s)", sizeOfLongLongInt);
		printf("Size of a float: %i byte(s)", sizeOfFloat);

		return 0;
	}
