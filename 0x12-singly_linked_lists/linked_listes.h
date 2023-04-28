#ifndef LINKED_LISTES_H
#define LINKED_LISTES_H

/* Included libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *  * struct list_s - singly linked list
 *   * @str: string - (malloc'ed string)
 *    * @len: length of the string
 *     * @next: points to the next node
 *      *
 *       * Description: singly linked list node structure
 *        */
typedef struct list_s
{
		char *str;
		struct list_s *next;
} list_t;

/**
 *  * print_list - prints all the elements of a list_t list.
 *   * @h: list_t input
 *    * Return: the number of nodes
 *     */

size_t print_list(const list_t *h);

#endif /* LINKED_LISTES_H */