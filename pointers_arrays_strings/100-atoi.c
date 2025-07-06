#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer converted from the string
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0, digit, started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';

			/* Build number as a negative to avoid overflow */
			if (result < (-(2147483647) - 1 + digit) / 10)
				break;

			result = result * 10 - digit;
			started = 1;
		}
		else if (started)
			break;

		i++;
	}

	/* If sign is positive, convert result to positive (if safe) */
	if (sign > 0 && result != -2147483648)
		result = -result;

	return (result);
}
