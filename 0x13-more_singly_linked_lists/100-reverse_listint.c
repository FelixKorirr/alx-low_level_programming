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
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	*head = previous;

	return (*head);
}
