#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog structure.
 * @name: Pointer to the name string of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to the owner string of the dog.
 *
 * Description: This function creates a new dog structure
 * and initializes its members
 * with the provided name, age, and owner values.
 * It allocates memory for the dog structure
 * using malloc and returns a pointer to the newly created dog structure.
 * If the allocation fails,
 * it returns NULL.
 * Return: dog_t or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
