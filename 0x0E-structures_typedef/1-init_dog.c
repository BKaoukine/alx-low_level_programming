#include "dog.h"
#include <stdio.h>

/**
 * init_dog - starting point
 * @d: pointer to dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the name of the dog's owner
 * Description: function that initialize a variable of type struct dog
 * Return: pointer to allocated memory
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/**
	* d is a pointer to the dog struct
	* when we call the function we pass the adress to the variable created
	* the the function copies the arguments to the into the fields
	*/

	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
