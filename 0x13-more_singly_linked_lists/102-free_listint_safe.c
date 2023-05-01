#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the first node in the listint_t list
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int f;
	listint_t *x;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		f = *h - (*h)->next;
		if (f > 0)
		{
			x = (*h)->next;
			free(*h);
			*h = x;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}

	*h = NULL;

	return (l);
}

