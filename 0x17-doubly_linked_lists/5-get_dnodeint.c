#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of linked list
 * @head: pointer to head
 * @index: index of the node
 * Return: nth node else, null
 * korir codes
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *new_node;
	unsigned int x;

	x = 0;
	if (head == NULL)
		return (NULL);

	new_node = head;
	while (new_node)
	{
		if (index == x)
			return (new_node);
		x++;
		new_node = new_node->next;
	}
	return (NULL);
}
