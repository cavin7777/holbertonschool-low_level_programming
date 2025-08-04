#include <stdio.h>

/**
 * add - add two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the sum
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	/* Declare a function pointer that matches */
	/* The signature of add() function */
	int (*funcp)(int, int);

	/* Assign to add() */
	funcp = &add;

	/* Call the function via funcp */
	printf("%d\n", funcp(10, 5));

	return (0);
}
