#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t			count, in = -1;
	const listint_t	*tmp, *fx;

	fx = head;
	count = 0;
	while (head)
	{
		count++;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		tmp = fx;
		while (++in < count)
		{
			if (tmp == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (count);
			}
			tmp = tmp->next;
		}
		in = -1;
	}
	return (count);
}
