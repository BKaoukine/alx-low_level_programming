#include "lists.h"
/**
 * free_listint2 - Starting Point
 * @head: Pointer to the head of the linked list.
 * Description: Free  listint_t list.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

	*head = NULL;
}

