#include "lists.h"

/**
 * free_listint - Frees all the nodes of a linked list.
 * @head: Pointer to the head of the linked list.
 *
 * This function frees the memory allocated for each node in the linked list.
 * It iterates through the list, frees the current node, and moves to the next
 * node until the list becomes empty (head is NULL).
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = NULL;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
