#include "lists.h"

/**
 * dlistint_len - Print a doubly linked list of integers.
 * @h: Pointer to the head of the doubly linked list.
 *
 * This function traverses the doubly linked list,
 * and counting the number of nodes. It prints the integer value of each node.
 * Return: the total number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
