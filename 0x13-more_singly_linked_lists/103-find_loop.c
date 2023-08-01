#include "lists.h"

listint_t *find_listint_loop(listint_t *head)
{
	long int	check;

	while (head)
	{
		check = head - head->next;
		if (check > 0)
			head = head->next;
		else
			return (head);
	}
	return (NULL);
}
