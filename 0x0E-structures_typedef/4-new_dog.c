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
	while (s[i])
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
 * _strdup - Duplicates a string.
 * @str: The string to be duplicated.
 *
 * Return: If successful, a pointer to the newly allocated duplicated string.
 *         If memory allocation fails or str is NULL, returns NULL.
 */
char	*_strdup(char *str)
{
	int		i;
	char	*s_malloc;

	if (!str)
		return (NULL);
	i = (int)ft_strlen(str);
	s_malloc = (char *)malloc(sizeof(char) * i + 1);
	if (!s_malloc)
		return (NULL);
	s_malloc = _strcpy(s_malloc, str);
	s_malloc[i] = 0;
	return (s_malloc);
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
	if (!name || !owner)
	{
		free(d);
		return (NULL);
	}
	d->name = _strdup(name);
	d->age = age;
	d->owner = _strdup(owner);
	if (!d->name)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	if (!d->owner)
	{
		free(d->owner);
		free(d);
		return (NULL);
	}
	return (d);
}
