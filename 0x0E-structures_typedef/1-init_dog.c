#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initializes a dog structure.
 * @d: Pointer to the dog structure to be initialized.
 * @name: Pointer to the name string of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to the owner string of the dog.
 *
 * Description: This function initializes the members of a dog structure.
 * It assigns the provided name, age, and owner values to the respective
 * members of the dog structure pointed to by 'd'.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
