#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list (handles loops).
 * @h: Double pointer to the head of the list.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *next;

	if (!h || !*h)
		return (0);

	current = *h;
	while (current)
	{
		next = current->next;
		size++;
		if (current < next)
		{
			free(current);
			current = next;
		}
		else
		{
			free(current);
			*h = NULL;
			return (size);
		}
	}

	*h = NULL;
	return (size);
}
