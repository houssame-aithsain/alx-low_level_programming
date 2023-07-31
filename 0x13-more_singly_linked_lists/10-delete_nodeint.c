#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given index
 * in a linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: The index of the node to be deleted (starting from 0).
 * Return: 1 if successful, -1 on failure (e.g., invalid index).
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *kill;
	unsigned int len;

	len = 0;
	tmp = *head;
	if (!index && *head)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (tmp)
	{
		len++;
		if ((index == len) && tmp->next)
		{
			kill = tmp->next;
			tmp->next = tmp->next->next;
			free(kill);
			return (1);
		}
		tmp = tmp->next;
	}
	return (-1);
}
