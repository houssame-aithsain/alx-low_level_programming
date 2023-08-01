#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	const listint_t *current = head;
	const listint_t *loop_node = NULL;

	while (current && current != loop_node)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		num++;

		if (current >= current->next)
		{
			if (!loop_node)
				loop_node = current;
			current = current->next;
		}
		else
		{
			current = current->next;
		}
	}

	return (num);
}
