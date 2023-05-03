#include "lists.h"
/**
 * sum_listint - Starting Point
 * @head:head of the linked list
 * Description: return the sum of data(n) of the linked list
 * Return:return the sum of the data
*/
int sum_listint(listint_t *head)
{
int sumOfData = 0;

while (head != NULL)
{
sumOfData += head->n;
head = head->next;
}

return (sumOfData);
}
