#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to a pointer to the head of the linked list.
 * @idx: Index of the list where the new node should be added.
 * @n: Value to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp_node;
unsigned int i;

/* Create the new node */
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;

/* Insert the new node at the beginning of the list */
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

/* Traverse the list to find the node before the position to insert */
temp_node = *head;
for (i = 0; i < idx - 1 && temp_node != NULL; i++)
{
temp_node = temp_node->next;
}

/* Check if it is possible to insert the new node */
if (temp_node == NULL)
{
free(new_node);
return (NULL);
}

/* Insert the new node between the previous and next nodes */
new_node->next = temp_node->next;
temp_node->next = new_node;

return (new_node);
}
