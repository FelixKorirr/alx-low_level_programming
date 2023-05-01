#include "lists.h"

/**
 * sum_listint - calculates sum of all the data of a listint_t list
 * @head: first node in the linked list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *a = head;

	while (a)
	{
		sum += a->n;
		a = a->next;
	}

	return (sum);
}
