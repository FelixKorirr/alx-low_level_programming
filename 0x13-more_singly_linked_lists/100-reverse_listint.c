#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list
 * @head: pointer to the node
 * Return: address to the first node
 * korir codes
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *new = NULL;

	while (*head)
	{
		new = (*head)->new;
		(*head)->new = previous;
		previous = *head;
		*head = new;
	}

	*head = previous;

	return (*head);
}
