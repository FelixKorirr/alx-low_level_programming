#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 *  in a listint_t list
 * @head: pointer to first node
 * Return: sum
 * korir codes
 */
int sum_listint(listint_t *head)
{
	int result = 0;
	listint_t *x = head;

	while (x)
	{
		result += x->n;
		x = x->next;
	}

	return (result);
}
