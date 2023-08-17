#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of a
 * linked list
 * @head: head address
 * @index: index of node
 * Return: 1(Success), -1(Fail)
 * korir codes
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *header_1;
	dlistint_t *header_2;
	unsigned int x;

	header_1 = *head;

	if (header_1 != NULL)
		while (header_1->prev != NULL)
			header_1 = header_1->prev;

	x = 0;

	while (header_1 != NULL)
	{
		if (x == index)
		{
			if (x == 0)
			{
				*head = header_1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				header_2->next = header_1->next;

				if (header_1->next != NULL)
					header_1->next->prev = header_2;
			}

			free(header_1);
			return (1);
		}
		header_2 = header_1;
		header_1 = header_1->next;
		x++;
	}

	return (-1);
}
