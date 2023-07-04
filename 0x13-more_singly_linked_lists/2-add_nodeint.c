#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of list
 * @head: pointer to first node
 * @n: new node's data
 * Return: pointer to new node, otherwise, null
 * korir codes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *second_node;

	second_node = malloc(sizeof(listint_t));
	if (!second_node)
	{
		return (NULL);
	}

	second_node->n = n;
	second_node->next = *head;
	*head = second_node;

	return (second_node);
}
