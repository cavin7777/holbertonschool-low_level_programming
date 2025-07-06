#include "main.h"

/**
 * cap_string - capitalizes all words of a string except the first word
 *              which is left unchanged
 * @str: string to modify
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 0;

	/* Skip the first word */
	while (str[i] && !(str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
						str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		str[i] == '}'))
		i++;

	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		    str[i] == '}')
		{
			capitalize_next = 1;
		}
		else if (capitalize_next && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 'a' - 'A';
			capitalize_next = 0;
		}
		else if (!capitalize_next && (str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] += 'a' - 'A';
		}
		else
		{
			capitalize_next = 0;
		}
		i++;
	}

	return (str);
}

