#include <stdio.h>

/**
 * main - description
 * Return: 0
 *
 */
int main(void)
{
	int a = 0;
	int x = 0;

	while (a <= 5)
	{
		printf("Hello World.\n");
		a++;
	}
	printf("End of loop.\n");

	while (x >= 0)
	{
	(x % 2 == 0) ? printf("%d is even \n", x) : printf("%d is odd \n", x);

	printf("/n Enter a positive number: ");
	scanf("%d", &x);
	}
	printf("/n End of loop");

	return (0);
}
