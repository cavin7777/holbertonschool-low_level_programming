#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - create a new hash table
 * @size: size of the arrays
 *
 * Return: pointer to the new hash table / NULL if something is wrong
 * (size, new and new->array)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new; /* alias of hash_table_t */
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);

	new = malloc(sizeof(hash_table_t));

	if (new == NULL)
		return (NULL);

	new->size = size; /*Assign the size in hash_table_t */

	new->array = malloc(size * (sizeof(hash_node_t *)));

	if (new->array == NULL)
		return (NULL);

	/* Assign the NULL value in each array[i] */
	while (i < size)
	{
		new->array[i] = NULL;
		i++;
	}

	return (new);
}
