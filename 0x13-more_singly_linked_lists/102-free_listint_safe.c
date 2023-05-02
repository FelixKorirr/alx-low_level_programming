#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Counts the number of nodes
 * @head: pointer to the head of the listint_t
 * Return: 0 if list is not looped else number of nodes in the list
 */
size_t looped_listint_count(listint_t *head)
{
	const listint_t *t, *s;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	t = head->next;
	s = (head->next)->next;

	while (s)
	{
		if (t == s)
		{
			t = head;
			while (t != s)
			{
				node++;
				t = t->next;
				s = s->next;
			}

			t = s->next;
			while (t != s)
			{
				node++;
				t = t->next;
			}

			return (node);
		}

		t = t->next;
		s = (s->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - frees the listint_t list safely
 * @h: pointer to the head of the listint_t list.
 * Return: size of the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *x;
	size_t node, indx;

	node = looped_listint_count(*h);

	if (node == 0)
	{
		for (; h != NULL && *h != NULL; node++)
		{
			x = (*h)->next;
			free(*h);
			*h = x;
		}
	}

	else
	{
		for (indx = 0; indx < node; indx++)
		{
			x = (*h)->next;
			free(*h);
			*h = x;
		}

		*h = NULL;
	}

	h = NULL;

	return (node);
}
