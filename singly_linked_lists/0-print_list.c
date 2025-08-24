#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t
 * @h: pointer to the head of the list (const = read only)
 *
 * Return: number of nodes (count)
 *
 */

size_t print_list(const list_t *h)
{
	size_t count = 0; /* size_t similar to int; can only hold 0 or + values.) */

	for (; h != NULL; h = h->next) /* DO NOT USE h = 0; better use while loop */
	{
		if (h->str == NULL)
		printf("[0] (nil)\n");
		else
		printf("[%u] %s\n", h->len, h->str);
		count++;
	}

	return (count);

}
