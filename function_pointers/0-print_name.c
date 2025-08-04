#include "function_pointers.h"

/**
 * print_name - executes a function passed as parameter on a name
 * @name: the name to print
 * @f: a pointer to a function that take a char * and returns void
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
