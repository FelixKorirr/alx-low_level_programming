#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a listint
 * list at a certain index
 * @head: pointer to first element in list
 * @index: index
 * Return: 1 (Success), -1 (Fail)
 * korir codes
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *x = *head;
	listint_t *present = NULL;
	unsigned int y = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(x);
		return (1);
	}

	while (y < index - 1)
	{
		if (!x || !(x->next))
			return (-1);
		x = x->next;
		y++;
	}

	present = x->next;
	x->next = present->next;
	free(present);

	return (1);
}
