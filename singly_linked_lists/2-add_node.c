#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t
 * @head: double pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *begin_node;

	if (str == NULL)
		return (NULL);

	begin_node = malloc(sizeof(list_t));

	if (begin_node == NULL)
		return (NULL);

	begin_node->str = strdup(str);

	if (begin_node->str == NULL)
	{
		free(begin_node);
		return (NULL);
	}

	begin_node->len = strlen(str);

	begin_node->next = *head;
	*head = begin_node;

	return (begin_node);

}
