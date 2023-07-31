#include "lists.h"

/**
 * free_listint2 - Frees all the nodes of a linked list and sets head to NULL.
 * @head: Double pointer to the head of the linked list.
 *
 * This function frees the memory allocated for each node in the linked list.
 * It sets the head to NULL, indicating that the list is now empty.
 * It iterates through the list, frees the current node, and moves to the next
 * node until the list becomes empty (head is NULL).
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	tmp = NULL;
	while (head && *head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	head = NULL;
}

