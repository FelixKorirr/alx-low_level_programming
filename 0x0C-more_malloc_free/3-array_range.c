#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values
 * @max: maximum range of values
 * Return: pointer to the new array,otherwise null
 * korir codes
 */

int *array_range(int min, int max)
{

	int *pt;

	int x;
	int size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;

	pt = malloc(sizeof(int) * size);

	if (pt == NULL)
	{
		return (NULL);
	}

	for (x = 0; min <= max; x++)
	{
		pt[x] = min++;
	}

	return (pt);
}
