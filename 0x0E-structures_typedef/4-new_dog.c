#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

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

/*Allocate memory for the new struct*/
	new_dog = malloc(sizeof(dog_t));

/*Check if the pointer variable is NULL*/
	if (new_dog == NULL)
		return (NULL);

/*Storing new values */
	new_dog->name = name;
	new_dog->owner = owner;
	new_dog->age = age;

return (new_dog);
}
