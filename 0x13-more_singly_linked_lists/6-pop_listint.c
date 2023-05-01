#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to the first element in the list
 * Return: the head node’s data, or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *c;
	int a;

	if (!head || !*head)
		return (0);

	a = (*head)->n;
	c = (*head)->next;
	free(*head);
	*head = c;

	return (a);
}
