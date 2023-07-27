#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the head of the linked list.
 */
void free_list(list_t *head)
{
	list_t  *cnt;
	list_t  *tmp;

	cnt = head;
	while (cnt)
	{
		tmp = cnt->next;
		free(cnt->str);
		free(cnt);
		cnt = tmp;
	}
}
