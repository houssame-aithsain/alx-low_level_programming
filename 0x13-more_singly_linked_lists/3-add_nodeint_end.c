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
 * ft_get_last_node - Returns the last node in the linked list.
 * @head: Pointer to the head of the linked list.
 * @new: Pointer to the new listint_t node to be appended.
 *
 * If the 'new' node is NULL, returns NULL. Otherwise,
 * traverses the linked list
 * using the 'head' pointer to find the last node and appends the 'new' node
 * to it.
 * Return: the 'new' node after appending it to the end of the list.
 */
listint_t *ft_get_last_node(listint_t *head, listint_t *new)
{
	if (!new)
		return (NULL);
	while (head->next)
		head = head->next;
	head->next = new;
	return (new);
}

/**
 * add_nodeint_end - Adds a new listint_t node at the end of a linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @n: The integer value to be assigned to the new node.
 *
 * Return: Pointer to the newly added listint_t node, or NULL on failure.
 *
 * If the list is empty (head is NULL),
 * creates a new node with the provided integer 'n'
 * and sets it as the head of the list. Otherwise,
 * calls ft_get_last_node() to find
 * the last node in the list and appends a new node with the provided 'n' value
 * to the end.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	new = NULL;
	if (!(*head))
	{
		new = ft_create_node(new, n);
		if (!new)
			return (NULL);
		*head = new;
		return (new);
	}
	return (ft_get_last_node(*head, ft_create_node(new, n)));
}
