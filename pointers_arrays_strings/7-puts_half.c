#include "main.h"
/**
 * puts_half - Prints the second half of a string, followed by a new line
 * @str: Pointer to the string to be printed
 *
 * Description: If the number of characters is odd, the function prints
 * the last (length_of_string - 1) / 2 characters.
 */

void puts_half(char *str)
{
	int len = 0;
	int i;
	int start;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		start = len / 2;
	}

	else
	{
		start = (len + 1) / 2;
	}

	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
