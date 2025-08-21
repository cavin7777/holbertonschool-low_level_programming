#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an arrays of integers
 * @min: min value
 * @max: max value
 *
 * Return: a new array or NULL
 *
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(size * sizeof(int));
	if (array == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min + i;

	return (array);
}
