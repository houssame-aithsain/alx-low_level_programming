#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: The head of the linked list.
 *
 * This function takes a pointer to the head of a linked list and
 * returns the number of nodes in the list. It uses a while loop
 * to traverse the list, incrementing the 'len' variable for each node
 * until it reaches the end of the list (h becomes NULL). The final
 * value of 'len' represents the total number of nodes in the list,
 * which is then returned as the result.
 *
 * Return: The number of nodes in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t lent;

	lent = 0;
	while (h)
	{
		lent++;
		h = h->next;
	}
	return (lent);
}
