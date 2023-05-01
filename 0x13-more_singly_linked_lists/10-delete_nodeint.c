#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *c = *head;
	listint_t *p = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(c);
		return (1);
	}

	while (x < index - 1)
	{
		if (!c || !(c->next))
			return (-1);
		c = c->next;
		x++;
	}


	p = c->next;
	c->next = p->next;
	free(p);

	return (1);
}
