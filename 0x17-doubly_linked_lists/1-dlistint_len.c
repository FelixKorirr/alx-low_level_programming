#include "lists.h"

/**
 * dlistint_len - returns number of elements in
 * linked list
 * @h: head pointer
 * Return: no of nodes
 * korir codes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	i = 0;

	if (h == NULL){
		return (i);
	}

	while (h->prev != NULL){
		h = h->prev;
	}
	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
