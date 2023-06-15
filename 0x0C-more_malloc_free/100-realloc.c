#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of the allocated space for ptr
 * @new_size: size of new memory block
 * Return: pointer to the newly allocated memory block
 * korir codes
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt;
	char *previous;

	unsigned int x;

	if (new_size == old_size)
	{
	return (ptr);
	}
	if (new_size == 0 && ptr)
	{
	free(ptr);
	return (NULL);
	}

	if (!ptr)
	{
	return (malloc(new_size));
	}

	pt = malloc(new_size);
	if (!pt)
	{
	return (NULL);
	}
	previous = ptr;

	if (new_size < old_size)
	{
	for (x = 0; x < new_size; x++)
	pt[x] = previous[x];
	}

	if (new_size > old_size)
	{
	for (x = 0; x < old_size; x++)
	pt[x] = previous[x];
	}
	free(ptr);
	return (pt);
}
