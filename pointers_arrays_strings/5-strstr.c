#include "main.h"

/**
 * _strstr - Locates a substring in a string
 * @haystack: The string to search in
 * @needle: The substring to find
 *
 * Return: Pointer to the beginning of the located substring,
 *         or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}

		if (!*n)
			return (haystack);

		haystack++;
	}

	return (0);
}

