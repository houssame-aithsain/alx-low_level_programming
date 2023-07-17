#include <stdlib.h>
#include "dog.h"

/**
 * ft_strlen - Calculates the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

/**
 * _strcpy - Copies the string pointed to by src to the buffer.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

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
	d->name = malloc(ft_strlen(name) + 1);
	if (!d->name)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(ft_strlen(owner) + 1);
	if (!d->owner)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->name = _strcpy(d->name, name);
	d->owner = _strcpy(d->owner, owner);
	d->age = age;
	return (d);
}
