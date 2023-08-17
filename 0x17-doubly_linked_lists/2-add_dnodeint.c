#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning
 * of linked list
 * @head: head pointer
 * @n: data
 * Return: pointer to new element
 * korir codes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *x;
	dlistint_t *y;

	x = malloc(sizeof(dlistint_t));
	if (x == NULL)
	{
		return (NULL);
	}

	x->n = n;
	x->prev = NULL;
	y = *head;

	if (y != NULL)
	{
		while (y->prev != NULL)
			y = y->prev;
	}

	x->next = y;

	if (y != NULL)
		y->prev = x;

	*head = x;

	return (x);
}
