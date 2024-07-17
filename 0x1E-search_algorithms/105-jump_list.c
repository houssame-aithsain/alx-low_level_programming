#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list
 * @list: Pointer to the head of the list to search in
 * @size: The number of nodes in the list
 * @value: The value to search for
 * Return: A pointer to the first node where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump = sqrt(size);
	listint_t *prev = list;
	listint_t *current = list;
	size_t i;

	if (!list)
		return (NULL);

	/* Jumping through the list */
	while (current->next != NULL && current->index < size && current->n < value)
	{
		prev = current;
		for (i = 0; i < jump && current->next; i++)
			current = current->next;
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n >= value)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
		prev->index, current->index);

	/* Linear search in the block */
	while (prev != current->next && prev->index < size)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
