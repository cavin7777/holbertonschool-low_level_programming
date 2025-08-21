#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: numbers of elements
 * @size: in bytes
 *
 * Return: 0 or NULL
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, total_size;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	arr = malloc(total_size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
		arr[i] = 0;

	return (arr);
}

