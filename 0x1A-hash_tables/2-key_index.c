#include "hash_tables.h"
/**
 *key_index - Function to get key index
 *@size: size of the array
 *@key: the key to look for
 *Return: the index of the key in search
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    hash_table_t *table = hash_table_create(size);
    int i = strlen(table->array) - 1;
    unsigned long int key_index;
    unsigned long int hash_code = hash_djb2(key);

    if(!table)
        return NULL;

    for(key_index; key_index <= i; key_index++)
    {
        if(strcmp(table->array[key_index], key) == 0)
            return key_index;
    }
}