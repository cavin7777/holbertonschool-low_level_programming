#include <stdio.h>

/**
 * main - print the number of arguments passed into the program
 * @argc: argument to count
 * @argv: array of argument string
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv; /* We're not using argv in this program */
	printf("%d\n", argc - 1); /* Subtract 1 because argv[0] is the program name */
	return (0);
}

