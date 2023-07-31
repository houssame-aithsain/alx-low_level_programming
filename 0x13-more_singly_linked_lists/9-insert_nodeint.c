#include "lists.h"

/**
 * ft_create_node - Creates a new listint_t node with the given integer value.
 * @n: The integer value to be assigned to the new node.
 *
 * Return: Pointer to the newly created listint_t node, or NULL on failure.
 */
static listint_t *ft_create_node(const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	return (new);
}

/**
 * ft_split_list - Inserts a new node after the given node and connects
 * the next node.
 * @tmp: Pointer to the node after which the new node will be inserted.
 * @new: Pointer to the new listint_t node to be inserted.
 * @next: Pointer to the node that comes after the new node.
 * Return: Pointer to 'tmp'.
 */
listint_t *ft_split_list(listint_t *tmp, listint_t *new, listint_t *next)
{
	if (!new)
		return (NULL);
	if (next)
		new->next = next;
	tmp->next = new;
	return (tmp);
}


/**
 * insert_nodeint_at_index - Inserts a new node at a given index
 * in a linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: The index at which the new node should be inserted (starting from 0).
 * @n: The integer value to be assigned to the new node.
 * Return: Pointer to the newly inserted node, or NULL on failure.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int len;
	listint_t   *tmp;

	len = 0;
	if (!head)
		return (NULL);
	if (!idx)
	{
		tmp = ft_create_node(n);
		if (!tmp)
			return (NULL);
		tmp->next = *head;
		*head = tmp;
		return (tmp);
	}
	tmp = *head;
	while (tmp)
	{
		len++;
		if (idx == len)
		{
			if (!tmp && idx > len)
				return (NULL);
			tmp = ft_split_list(tmp, ft_create_node(n), tmp->next);
			if (!tmp)
				return (NULL);
			return (tmp->next);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
