#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at
 * a particular position
 * @h: head address
 * @idx: index of node
 * @n: value of new node
 * Return: address of node ,else, NULL
 * korir codes
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *head;
	unsigned int x;

	new_node = NULL;
	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
	}
	else
	{
		head = *h;
		x = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (x == idx)
			{
				if (head->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node != NULL)
					{
						new_node->n = n;
						new_node->next = head->next;
						new_node->prev = head;
						head->next->prev = new_node;
						head->next = new_node;
					}
				}
				break;
			}
			head = head->next;
			x++;
		}
	}

	return (new_node);
}
