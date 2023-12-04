#include "hash_tables.h"

/**
 *hash_table_create - creates a hash table.
 *@size: size of the array
 *Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table; /* Create Hash table Data Struct*/
	unsigned long int i = 0;
    /*Allocate memory for the Table data structor*/
	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
    /*Allocate memory for each node in the array*/
	table->array = (hash_node_t **)calloc(table->size, sizeof(hash_node_t *));

	if (!table->array)
		return (NULL);
	for (; i < size; i++)
    /*Initiat the array memory location to NULL*/
		table->array[i] = NULL;
	return (table);
}
