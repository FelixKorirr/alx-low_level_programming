#include "lists.h"

/**
 * free_listint - frees a list_t list
 * @head: pointer to list to be freed
 * korir codes
 */
void free_listint(listint_t *head)
{
	listint_t *x;

	while (head)
	{
		x = head->next;
		free(head);
		head = x;
	}
}
