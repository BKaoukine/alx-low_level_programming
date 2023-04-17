#include "dog.h"
#include <stdio.h>

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

if (d->name[0] == '\0')
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);

if (d->age <= 0)
printf("Age: (nil)\n");
else
printf("Age: %02.1f\n", d->age);

if (d->owner[0] == '\0')
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->owner);
}
