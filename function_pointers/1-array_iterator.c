#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function that gives element of an array
 * @array: the array to iterate over
 * @size: the size of the array
 * @action: a pointer to the function to execute
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

