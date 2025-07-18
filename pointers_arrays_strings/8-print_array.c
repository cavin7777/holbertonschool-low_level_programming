#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements of an array of integers
 * @a: Array of integers
 * @n: Number of elements to print
 *
 * Description: Numbers are printed separated by comma and space.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
