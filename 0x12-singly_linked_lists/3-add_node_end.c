#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the list_t list
 * @str: string to be added
 * Return: address of the new element, otherwise, NULL
 * korir codes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *last;
	list_t *ptr = *head;

	while (str[len])
	{
		len++;
	}
	last = malloc(sizeof(list_t));
	if (!last)
		return (NULL);

	last->str = strdup(str);
	last->len = len;
	last->next = NULL;

	if (*head == NULL)
	{
		*head = last;
		return (last);
	}

	while (ptr->next)
		ptr = ptr->next;

	ptr->next = last;

	return (last);
}
