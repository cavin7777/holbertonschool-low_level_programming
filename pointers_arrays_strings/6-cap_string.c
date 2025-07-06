#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to capitalize
 *
 * Return: pointer to the changed string
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1;

	while (str[i] != '\0')
	{
		if (capitalize_next && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - ('a' - 'A');
			capitalize_next = 0;
		}
		else if (!capitalize_next && (str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] = str[i] + ('a' - 'A');
		}

		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		    str[i] == '}')
		{
			capitalize_next = 1;
		}
		else
		{
			capitalize_next = 0;
		}
		i++;
	}

	return (str);
}

