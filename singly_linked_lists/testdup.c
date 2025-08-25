#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	const char *original = "Hello, world!";

	/* Duplicate the string */
	char *duplicate = strdup(original);

	if (duplicate == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}

	printf("Original: %s\n", original);
	printf("Duplicate: %s\n", duplicate);

    /* Free the duplicated string */
	free(duplicate);

	return (0);
}

