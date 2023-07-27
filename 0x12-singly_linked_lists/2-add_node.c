#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to the pointer to the head of the linked list.
 * @str: The string to be added as the content of the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len = 0;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!(new->str))
	{
		free(new);
		return (NULL);
	}
	while (str[len])
		len++;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
