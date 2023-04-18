#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - function returns the lenght of a string
 *@s: a pointer to a string array is given to the function
 * Discription: prints the lenght of a string
 *
 * Return: 0 if Succes
*/
int _strlen(char *s)
{
int i = 0;

while (*(s + i) != 0)
{
i++;
}
return (i);
}
/**
 * _strcpy - function copies string
 *@dest: string destination
 *@src: source of the string
 * Discription: copies a string from src to dest
 * Return: 0 if Succes
*/
char *_strcpy(char *dest, char *src)
{
char *original_dest = dest;
while (*src)
{
*dest = *src;
src++;
dest++;
}
*dest = '\0';
return (original_dest);
}

/**
 * new_dog - starting point
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the name of the dog's owner
 * Description: function that initialize a variable of type struct dog
 * Return: pointer to allocated memory
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

/* Allocate memory for the new struct */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
	return (NULL);
	}

/* Allocate memory for the name and owner strings */
	new_dog->name = malloc(_strlen(name) + 1);
	new_dog->owner = malloc(_strlen(owner) + 1);
		if (new_dog->name == NULL || new_dog->owner == NULL)
		{
		free(new_dog);
		return (NULL);
		}

/* Copy the name and owner strings */
	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);

/* Set the age */
	new_dog->age = age;

	return (new_dog);
}

