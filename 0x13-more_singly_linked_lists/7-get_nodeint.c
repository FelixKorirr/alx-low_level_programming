#include "lists.h"

/**
 * get_nodeint_at_index - returns the node of listint list
 * @head: first node of the listint list
 * @index: index of the node
 * Return: pointer to the node, else, null
 * korir codes
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *y = head;

	while (y && x < index)
	{
		y = y->next;
		x++;
	}

	return (y ? y : NULL);
}
