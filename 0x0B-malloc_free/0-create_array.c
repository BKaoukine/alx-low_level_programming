#include "main.h"
/**
 * create_array - function copies string
 *@size: size of the memory to allocat for the array
 *@c: char to initilize the array
 * Discription: create an array with specified size of memory and initilize it
 * Return: 0 if Succes
*/
char *create_array(unsigned int size, char c)
{
char *strarray;
unsigned int i;
if (size == 0)
{
return (NULL);
}
else
{
strarray = (char *) malloc(size * sizeof(char));
for (i = 0; i < size - 1; i++)
{
	strarray[i] = c;
}

}
	return (strarray);
}
