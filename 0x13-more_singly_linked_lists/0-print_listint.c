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
const listint_t *tmp = h;
while (tmp != NULL)
{
	count++;
	printf("%d\n", tmp->n);
	tmp = tmp->next;
}

return (count);
}
