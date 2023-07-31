#include "lists.h"

/**
 * ft_create_node - Creates a new listint_t node with the given integer value.
 * @new: Pointer to a new listint_t node to be created and populated.
 * @n: The integer value to be assigned to the new node.
 *
 * Return: Pointer to the newly created listint_t node, or NULL on failure.
 */
listint_t *ft_create_node(listint_t *new, const int n)
{
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	return (new);
}

/**
 * add_nodeint - Adds a new listint_t node at the beginning of a linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @n: The integer value to be assigned to the new node.
 *
 * Return: Pointer to the newly added listint_t node, or NULL on failure.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = NULL;
	if (!(*head))
	{
		new = ft_create_node(new, n);
		if (!new)
			return (NULL);
		*head = new;
		return (*head);
	}
	new = ft_create_node(new, n);
	if (!new)
		return (NULL);
	new->next = *head;
	*head = new;
	return (*head);
}
