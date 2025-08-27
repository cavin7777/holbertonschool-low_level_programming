#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_set - new element in hash_table
 * @ht: the hash table
 * @key: the new key
 * @value: the new value
 * collision means char *key is in the same index
 * Return: 1 if success and 0 if NULL
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index;
	hash_node_t *new_element, *current;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	/* same as if index = hash_djb2(key) % size */

	new_element = malloc(sizeof(hash_node_t));
	if (new_element == NULL)
		return (0);

	current = ht->array[index]; /*access the start of linked list in arr[index] */
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
			return (0);
		}
		return (1);
	}

	new_element->key = strdup(key);
	if (new_element->key == NULL)
		return (0);

	new_element->value = strdup(value);
	if (new_element->value == NULL)
		return (0);

	new_element->next = ht->array[index];
	ht->array[index] = new_element;

	return (1);
}
