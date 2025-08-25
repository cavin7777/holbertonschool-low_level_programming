#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

/**
 * You must save head->next in a temporary variable before freeing head.
 * Freeing the current node comes after you have safely stored the pointer
 * to the next node.
 */
