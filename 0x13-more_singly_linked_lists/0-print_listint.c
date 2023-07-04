#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: pointer to list_t list
 * Return: the number of nodes
 * korir codes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
