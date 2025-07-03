#include "main.h"
/**
 * rev_string - Reverses a string in place
 * @s: Pointer to the string to be reversed
 */

void rev_string(char *s)
{
	int i = 0, j = 0;
	char temp;

	/* Find the length of the string */
	while (s[j] != '\0')
		j++;

	j--; /* move to he last character (not the null terminator) */

	/* swap characters from start to end */
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
