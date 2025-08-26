#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");

	printf("Index of 'betty': %lu\n",
           key_index((const unsigned char *)"betty", ht->size));
    printf("Value at that index: %s\n",
           ht->array[key_index((const unsigned char *)"betty", ht->size)]->value);
	return (EXIT_SUCCESS);
}
