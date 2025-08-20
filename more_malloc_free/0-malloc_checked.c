#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocate memory
 * @b: number of bytes
 *
 * Return: a pointer to the allocated memory
 * else status value of 98 of exit
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if
	   (pointer == NULL)
		exit(98);

	return (pointer);
}
