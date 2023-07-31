#include "lists.h"

/**
 * sum_listint - Calculates the sum of all,
 * the integers stored in the linked list.
 * @head: Pointer to the head of the linked list.
 *
 * This function traverses the linked list starting from the head and adds up
 * all the integer values stored in the nodes.
 *
 * Return: The sum of all the integers in the linked list.
 */
int sum_listint(listint_t *head)
{
	int n;

	n = 0;
	while (head)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}
