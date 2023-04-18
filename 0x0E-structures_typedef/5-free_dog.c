#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - starting point
 * @d: pointer to dog-t struct
 * Description: function that free up struct dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
