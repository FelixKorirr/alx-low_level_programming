#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts number of nodes in listint_t linked list.
 * @head: pointer to the head of the listint_t
 * Return: 0 if list is not looped else number of nodes in the list.
 */

size_t looped_listint_len(const listint_t *head)
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
 * print_listint_safe - prints listint_t list safely
 * @head: pointer to head of listint_t list.
 * Return: no of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node, indx = 0;

	node = looped_listint_len(head);

	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (indx = 0; indx < node; indx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (node);
}
