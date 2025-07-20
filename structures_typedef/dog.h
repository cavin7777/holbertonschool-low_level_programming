#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for a dog
 * @name: Name of the dog (string)
 * @age: Age of the dog (float)
 * @owner: Owner of the dog (string)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif /* DOG_H */
