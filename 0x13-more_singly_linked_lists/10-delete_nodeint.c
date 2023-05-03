#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at index of a listint_t
 *                           linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @index: Index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current_node, *previous_node;
unsigned int i;

/* Check if the list is empty */
if (*head == NULL)
return (-1);

/* Delete the first node */
if (index == 0)
{
current_node = *head;
*head = (*head)->next;
free(current_node);
return (1);
}

/* Find the node before the position to delete */
previous_node = *head;
for (i = 0; i < index - 1 && previous_node != NULL; i++)
{
previous_node = previous_node->next;
}

/* Check if it is possible to delete the node */
if (previous_node == NULL || previous_node->next == NULL)
return (-1);

/* Delete the node between the previous and next nodes */
current_node = previous_node->next;
previous_node->next = current_node->next;
free(current_node);

return (1);
}
