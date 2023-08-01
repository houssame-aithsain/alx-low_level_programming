#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t		count;
	long int	check;

	count = 0;
	while (head)
	{
		count++;
		printf("[%p] %d\n", (void *)head, head->n);
		check = head - head->next;
		if (check > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
		if (!head)
			exit(98);
	}
	return (count);
}
