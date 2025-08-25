#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	while (head != NULL)
	{
		free(head->str);
		head = head->next;
		free(head);
	}
}

