#include <unistd.h>

/**
 * main - write a text in the standard output
 * Return: 1
 *
 */
int main(void)
{
	char message[] = /* can also use char *message */
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, message, sizeof(message) - 1);
	return (1);
}
