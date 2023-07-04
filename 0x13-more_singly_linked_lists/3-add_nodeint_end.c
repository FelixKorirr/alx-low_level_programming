#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: pointer to first element in the list
 * @n: new element's data
 * Return: address of new element, otherwise, NULL
 * korir codes
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *x = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (x->next)
		x = x->next;

	x->next = new_node;

	return (new_node);
}
