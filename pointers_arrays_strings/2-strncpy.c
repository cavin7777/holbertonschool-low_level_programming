#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 * @n: maximum number of characters to copy from src
 *
 * Description: Copies up to n characters from the string pointed to by src
 * to dest. If src is less than n characters long, the remainder of dest is
 * filled with '\0' characters. Otherwise, dest is not null-terminated.
 *
 * Return: pointer to the destination string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

