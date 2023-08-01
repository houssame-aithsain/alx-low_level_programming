#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list (handles loops).
 * @h: Double pointer to the head of the list.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t		count;
	long int	check;
	listint_t	*head;
	listint_t	*tmp;

	head = *h;
	count = 0;
	while (head)
	{
		check = head - head->next;
		tmp = head;
		head = head->next;
		free(tmp);
		count++;
		if (check <= 0)
			break;
	}
	*h = NULL;
	return (count);
}
