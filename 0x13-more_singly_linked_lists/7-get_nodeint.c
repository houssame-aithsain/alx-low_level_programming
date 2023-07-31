#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a given index in a linked list.
 * @head: Pointer to the head of the linked list.
 * @index: The index of the node to retrieve (0-based).
 *
 * This function traverses the linked list starting from the head
 * and moves
 * 'index' times to find the desired node. If the index is invalid
 * (greater
 * than the number of nodes in the list), it returns NULL.
 *
 * Return: Pointer to the node at the specified index, or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int len;

	len = 0;
	while (head)
	{
		if (len == index)
			return (head);
		len++;
		head = head->next;
	}
	return (NULL);
}
