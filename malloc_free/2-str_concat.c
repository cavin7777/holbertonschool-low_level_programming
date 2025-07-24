#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a newly allocated string containing s1 followed by s2,
 * or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int len1 = 0;
	int len2 = 0;
	char *concat;

	/*Traitement NULL comme vide */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* calcul de la longueur */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* Allocate memory */
	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);

	/* copy s1 */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* copy s2 after s2 */
	for (j = 0; j < len2; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);

}
