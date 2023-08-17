#include "lists.h"

/**
 * sum_dlistint - returns result of all the data
 * of linked list
 * @head: head address
 * Return: result
 * korir codes
 */
int sum_dlistint(dlistint_t *head)
{
	int result;

	result = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			result = result + head->n;
			head = head->next;
		}
	}

	return (result);
}
