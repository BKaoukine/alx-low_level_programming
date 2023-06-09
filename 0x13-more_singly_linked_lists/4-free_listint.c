#include "lists.h"
/**
 * free_listint - Starting Point
 * @head: Pointer to the head of the linked list.
 * Description: Free  listint_t list.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
