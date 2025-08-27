#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieve a value associated with the key
 * @ht: hash table
 * @key: char *key
 *
 * Return: the value  associated with element or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	 unsigned long int index;
	 hash_node_t *current;

	index = key_index((const unsigned char *)key, ht->size);
    /* same as if index = hash_djb2(key) % size */
	current = ht->array[index] /* current start at index and first linked list */;
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
	current = current->next;
	}
	return (NULL);
}
