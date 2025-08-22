#include <stdlib.h>
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
	int name_len = 0, owner_len = 0, i = 0;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[name_len] != '\0')
		name_len++;

	while (owner[owner_len] != '\0')
		owner_len++;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	copy_name = malloc(name_len + 1);
	if (copy_name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i <= name_len; i++)
		copy_name[i] = name[i];

	copy_owner = malloc(owner_len + 1);
	if (copy_owner == NULL)
	{
		free(dog);
		free(copy_name);
	}
	for (i = 0; i <= owner_len; i++)
		copy_owner[i] = owner[i];
	dog->name = copy_name;
	dog->age = age;
	dog->owner = copy_owner;

	return (dog);
}
