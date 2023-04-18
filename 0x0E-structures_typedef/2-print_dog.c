#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - starting point
 * @d: pointer to dog struct
 * Description: function that prints a variable of type struct dog
 * Return: pointer to allocated memory
 */

void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}

if (d->name == NULL)
printf("Name: (nil)\n");

if (d->owner == NULL)
printf("Owner: (nil)\n");

printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
