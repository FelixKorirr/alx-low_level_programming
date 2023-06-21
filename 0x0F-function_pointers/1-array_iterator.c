#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter
 *on each element of an array.
 *@array: array
 *@size: size of array
 *@action: pointer to function
 *Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int y;

	y = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}

	while (y < size)
	{
		action(array[y]);
		y++;
	}
}
