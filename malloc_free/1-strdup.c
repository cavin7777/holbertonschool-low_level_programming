#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string, or NULL if str is NULL or
 *         if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *dup;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

    /* Find the length of the string */
	while (str[len] != '\0')
		len++;

    /* Allocate memory for duplicate string including null terminator */
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

   /* Copy the string */
	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}

