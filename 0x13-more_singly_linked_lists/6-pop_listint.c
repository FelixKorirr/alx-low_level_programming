#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint list
 * @head: pointer to the first element in the list
 * Return: element's deleted data, 0 if list is empty
 * korir codes
 */
int pop_listint(listint_t **head)
{
	int y;
	listint_t *x;

	if (!head || !*head)
	{
		return (0);
	}

	y = (*head)->n;
	x = (*head)->next;
	free(*head);
	*head = x;

	return (y);
}
