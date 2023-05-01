#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a given position
 * @head: pointer to first node in the list
 * @idx: index where new node is added
 * @n: data to insert in new node
 * Return: address of the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *a;
	listint_t *c = *head;

	a = malloc(sizeof(listint_t));
	if (!a || !head)
		return (NULL);

	a->n = n;
	a->next = NULL;

	if (idx == 0)
	{
		a->next = *head;
		*head = a;
		return (a);
	}

	for (i = 0; c && i < idx; i++)
	{
		if (i == idx - 1)
		{
			a->next = c->next;
			c->next = a;
			return (a);
		}
		else
			c = c->next;
	}

	return (NULL);
}






