#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + 48);
		if (i < 9)
		{
			putchar(44); /* comma */
			putchar(32); /* space */
		}
	}

	putchar('\n');

	return (0);
}

