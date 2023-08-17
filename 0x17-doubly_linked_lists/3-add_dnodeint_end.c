#include "lists.h"

/**
 * add_dnodeint_end - adds new node at end
 * of linked list
 * @head: head pointer
 * @n: data
 * Return: pointer to new element
 * korir codes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *x;
	dlistint_t *y;

	y = malloc(sizeof(dlistint_t));
	if (y == NULL)
	{
		return (NULL);
	}

	y->n = n;
	y->next = NULL;

	x = *head;

	if (x != NULL)
	{
		while (x->next != NULL)
			x = x->next;
		x->next = new;
	}
	else
	{
		*head = y;
	}

	y->prev = x;

	return (y);
}
