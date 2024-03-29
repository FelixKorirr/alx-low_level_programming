#include "search_algos.h"

/**
 * linear_skip - Function searches for an algorithm in a sorted singly
 *  linked list of integers using linear skip.
 * @list: Pointer to the  head of the linked list to search.
 * @value: value to search for.
 * Return: If the value is not present or the head of the list is NULL, NULL.
 * else, a pointer to the first node where the value is located.
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *node, *jmp;
if (list == NULL)
{
return (NULL);
}

for (node = jmp = list; jmp->next != NULL && jmp->n < value;)
{
node = jmp;
if (jmp->express != NULL)
{
jmp = jmp->express;
printf("Value checked at index [%ld] = [%d]\n",
jmp->index, jmp->n);
}
else
{
while (jmp->next != NULL)
jmp = jmp->next;
}
}
printf("Value found between indexes [%ld] and [%ld]\n",
node->index, jmp->index);
for (; node->index < jmp->index && node->n < value; node = node->next)
printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
return (node->n == value ? node : NULL);
}
