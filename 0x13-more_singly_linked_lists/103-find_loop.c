#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to the head of the list.
 * Return: The address of the node where the loop starts, or NULL if no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s, *f;

	if (!head || !head->next)
		return (NULL);

	s = head->next;
	f = head->next->next;

	while (f && f->next)
	{
		if (s == f)
		{
			s = head;
			while (s != f)
			{
				s = s->next;
				f = f->next;
			}
			return (s);
		}
		s = s->next;
		f = f->next->next;
	}

	return (NULL);
}
