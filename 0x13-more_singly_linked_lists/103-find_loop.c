#include "lists.h"

/**
 * find_listint_loop - finds a loop in listint list
 * @head: pointer to node
 * Return: address of the node, or NULL
 * korir codes
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *x = head;
	listint_t *y = head;

	if (!head)
	{
		return (NULL);
	}

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
