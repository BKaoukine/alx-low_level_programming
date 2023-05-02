#include "lists.h"
/**
 * print_listint - Starting point
 * @h: header of the likned list
 * Description: Function that countes number of elements of a Linked list
 * Return: number of elements
*/
size_t print_listint(const listint_t *h)
{
int count = 0;

while (h != NULL)
{
count++;
h = h->next;
}

printf("%d\n", count);
return (count);
}
