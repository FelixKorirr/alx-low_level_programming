#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes function as parameter on each element of an array.
 * @array: array
 * @size: elements to print
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;


	if (array == NULL || action == NULL)
		return;


	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}



