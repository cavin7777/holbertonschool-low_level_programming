#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to measure
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0') /*base case: end of string */
		return (0);
	return (1 + _strlen_recursion(s + 1)); /*recursive case*/
}

