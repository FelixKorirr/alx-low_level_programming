#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds new node at the beginning of a list_tlist
 * @head: double pointer to the list_t list
 * @str: new string to be added
 * Return: Address of new element, otherwise, NULL
 * korir codes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *next;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}

	next = malloc(sizeof(list_t));
	if (!next)
	{
		return (NULL);
	}

	next->str = strdup(str);
	next->len = len;
	next->next = (*head);
	(*head) = next;

	return (*head);
}
