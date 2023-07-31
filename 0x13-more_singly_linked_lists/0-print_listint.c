#include "lists.h"
/**
 * print_listint - Prints all elements of a listint_t linked list.
 * @h: Pointer to the head of the listint_t linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_listint(const listint_t *h)
{
	size_t len;

	len = 0;
	while (h)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}
	return (len);
}
