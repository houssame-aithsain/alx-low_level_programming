#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints the details of a dog.
 * @d: Pointer to the dog structure to be printed.
 *
 * Description: This function prints the name, age, and owner of a dog
 * by accessing the corresponding members of the dog structure pointed to
 * by 'd'. If 'd' is NULL, the function prints "nil" for each member.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("nil\n");

		if (d->age)
			printf("Age: %.1f\n", d->age);
		else
			printf("nil\n");

		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("nil\n");
	}
}
