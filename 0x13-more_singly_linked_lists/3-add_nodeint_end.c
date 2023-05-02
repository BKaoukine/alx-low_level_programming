#include "lists.h"
/**
 * add_nodeint_end - Starting Point
 * @head: Pointer to the head of the linked list.
 * @n: Integer value to be stored in the new node.
 * Description: Adds a new node at the end of a listint_t list.
 * Return: Address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *last_node;

if (head == NULL)
{
return (NULL);
}

new_node = malloc(sizeof(listint_t));

if (new_node == NULL)
{
return (NULL);
}

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
/* If the list is empty, make the new node the head */
*head = new_node;
}
else
{
/* Traverse the list until we reach the last node */
last_node = *head;
while (last_node->next != NULL)
{
last_node = last_node->next;
}

/* Add the new node as the next node of the last node */
last_node->next = new_node;
}

return (new_node);
}
