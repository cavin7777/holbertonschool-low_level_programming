#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 *@name: char name
 *@age: float age
 *@owner: char owner
 *
 * Return: dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *copy_name;
	char *copy_owner;
	int i = 0;

	if (name == NULL && owner == NULL)
		return (NULL);

	copy_name = malloc(strlen(name) + 1);
	for (i = 0; name[i] != '\0'; i++)
		copy_name[i] = name[i];
	if (name == NULL)
		return (NULL);

	copy_owner = malloc(strlen(owner) + 1);
	for (i = 0; name[i] != '\0'; i++)
		copy_owner[i] = owner[i];
	if (owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
		if (dog == NULL)
			return (NULL);

	dog->name = copy_name;
	dog->age = age;
	dog->owner = copy_owner;

	return (dog);
}
