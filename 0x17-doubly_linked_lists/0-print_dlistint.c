#include "lists.h"

/**
 * print_dlistint - Print a doubly linked list of integers.
 * @h: Pointer to the head of the doubly linked list.
 *
 * This function traverses the doubly linked list,
 * printing each element's value
 * and counting the number of nodes. It prints the integer value of each node.
 * Return: the total number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
