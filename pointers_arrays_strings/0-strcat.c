#include "main.h"

/**
 * _strcat - concatenates the src string to the dest string
 * @dest: destination string to which src is appended
 * @src: source string to append to dest
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

    /* Find the end of dest */
	while (dest[i] != '\0')
		i++;

    /* Append src to dest */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

    /* Null-terminate dest */
	dest[i] = '\0';

	return (dest);
}

