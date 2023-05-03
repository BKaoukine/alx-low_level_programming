#include "lists.h"
/**
 * pop_listint - Starting Point
 * @head: Pointer to the head of the linked list.
 * Description: remove heade of listint_t list.
 * Return: returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

	return ((*head)->n);
}

