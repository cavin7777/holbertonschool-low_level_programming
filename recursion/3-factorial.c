#include "main.h"
/**
 * factorial - return the factorial of a given name
 * @n: the number to calculate the factorial of
 *
 * Return: factorial of n, or -1 if n is negative
 *
 */
int factorial(int n)
{
	if (n < 0)
		return (-1); /* Error: factorial not defined for negative numbers */
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
