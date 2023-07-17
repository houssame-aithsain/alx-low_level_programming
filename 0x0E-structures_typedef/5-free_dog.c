#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees memory allocated for a dog structure.
 * @d: Pointer to the dog structure to be freed.
 *
 * Description: This function frees the memory allocated for a dog structure,
 * including the memory for the name and owner strings,
 * and the dog structure itself.
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
