#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: list to search for
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *x = head;
	listint_t *y = head;

	if (!head)
		return (NULL);

	while (x && y && y->next)
	{
		y = y->next->next;
		x = x->next;

		if (y == x)

		{
			x = head;
			while (x != y)

			{
				x = x->next;
				y = y->next;
			}

			return (y);
		}
	}

	return (NULL);
}

