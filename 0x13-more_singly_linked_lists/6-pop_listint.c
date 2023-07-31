#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list and returns
 * its data (n).
 * @head: Double pointer to the head of the linked list.
 *
 * This function removes the first node (head) of the linked list and returns
 * the data (n) of the removed node. If the list is empty (head is NULL),
 * it
 * returns 0. The function also frees the memory allocated for the removed
 * node.
 *
 * Return: The data (n) of the removed head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (!head || !(*head))
		return (0);
	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
