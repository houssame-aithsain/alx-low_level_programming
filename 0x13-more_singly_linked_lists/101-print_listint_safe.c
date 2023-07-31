#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list (handles loops).
 * @head: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *s, *f;
	size_t count = 0;

	s = f = head;

	while (s && f && f->next)
	{
		s = s->next;
		f = f->next->next;

		if (s == f)
		{
			printf("-> [%p] %d\n", (void *)s, s->n);
			break;
		}
	}

	if (!s || !f || !f->next)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			count++;
		}
	}
	else
	{
		s = head;
		while (s != f)
		{
			printf("[%p] %d\n", (void *)s, s->n);
			s = s->next;
			f = f->next;
			count++;
		}
		printf("-> [%p] %d\n", (void *)s, s->n);
	}

	return (count);
}
