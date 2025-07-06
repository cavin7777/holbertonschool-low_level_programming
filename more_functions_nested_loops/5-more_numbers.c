#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14
 */
void more_numbers(void)
{
	int i, j;
	char buffer[150];
	int pos = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				buffer[pos++] = '1';
			}
				buffer[pos++] = (j % 10) + '0';
		}
		buffer[pos++] = '\n';
	}
	for (i = 0; i < pos; i++)
	{
		_putchar(buffer[i]);
	}
}
