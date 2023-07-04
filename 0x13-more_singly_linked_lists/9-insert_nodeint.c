#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list
 * @head: pointer to the first node
 * @idx: index
 * @n: data
 * Return: address of the new node, else, null
 * korir codes
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *y = *head;
	unsigned int x;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (x = 0; y && x < idx; x++)
	{
		if (x == idx - 1)
		{
			new_node->next = y->next;
			y->next = new_node;
			return (new_node);
		}
		else
			y = y->next;
	}

	return (NULL);
}
