#include "lists.h"

/**
 * add_dnodeint_end - Add a new node at the end of a doubly linked list.
 * @head: Pointer to a pointer to the head of the doubly linked list.
 * @n: Integer value to be included in the new node.
 *
 * This function adds a new node at the end of a doubly linked list.
 * It allocates memory for a new node, sets its integer value,
 * and places it at the end.
 * If the list is empty, the new node becomes the head.
 * Return: the address of the head of the doubly linked list.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
	return (new_node);
}
