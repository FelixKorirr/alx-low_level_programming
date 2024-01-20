#include "search_algos.h"

/**
 * jump_list - SFunction searches for an algorithm in a sorted singly
 *  linked list of integers using jump search.
 * @list: Pointer to the  head of the linked list to search.
 * @size: number of nodes in the list.
 * @value: value to search for.
 * Return: If value is not present or head of the list is NULL, NULL.
 * else, a pointer to the first node where the value is located.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{

size_t stp, stp_size;
listint_t *node, *jmp;

if (list == NULL || size == 0)
{
return (NULL);
}
stp = 0;
stp_size = sqrt(size);

for (node = jmp = list; jmp->index + 1 < size && jmp->n < value;)
{
node = jmp;

for (stp += stp_size; jmp->index < stp; jmp = jmp->next)
{
if (jmp->index + 1 == size)
break;
}
printf("Value checked at index [%ld] = [%d]\n", jmp->index, jmp->n);
}

printf("Value found between indexes [%ld] and [%ld]\n",
node->index, jmp->index);
for (; node->index < jmp->index && node->n < value; node = node->next)
printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
return (node->n == value ? node : NULL);
}
