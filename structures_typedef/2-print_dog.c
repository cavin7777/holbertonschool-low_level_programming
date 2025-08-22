#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog to print
 *
 * Description: Prints name, age and owner of the dog.
 * If d or any string element is NULL, prints (nil).
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("nil");
	else
		printf("Name : %s\n", d->name);

	printf("Age : %.1f\n", d->age);

	if (d->owner == NULL)
		printf("nil");
	else
		printf("Owner : %s\n", d->owner);
}
