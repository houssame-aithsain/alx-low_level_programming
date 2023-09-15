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
	dlistint_t *tmp, *new, *h;

	tmp = *head;
	h = tmp;

	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->next = NULL;
	if (!head || !*head)
		return (*head = new);
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (h);
}
