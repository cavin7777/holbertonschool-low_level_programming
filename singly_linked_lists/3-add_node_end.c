#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: double pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node, *temp;

	if (str == NULL)
	return (NULL);

	end_node = malloc(sizeof(list_t));

	if (end_node == NULL)
	return (NULL);

	end_node->str = strdup(str);

	if (end_node->str == NULL)
	{
		free(end_node);
		return (NULL);
	}

	end_node->len = 0;

	while (str[end_node->len] != '\0')
		end_node->len = end_node->len + 1;

	if (*head == NULL)
	{
		*head = end_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = end_node;
	}

	return (end_node);

}
