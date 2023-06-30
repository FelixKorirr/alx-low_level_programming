#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: list to be freed
 * korir codes
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
