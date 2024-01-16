#include "search_algos.h"

/**
 * linear_search - Function searches for a value in array of integers
 * using linear search algorithm
 * @array: pointer to array
 * @size: number of elements in array
 * @value: Value to search for
 * Return:first index, -1 if array is null
*/
int linear_search(int *array, size_t size, int value)
{
int i;
if (array == NULL)
{
return (-1);
}
for (i = 0; i < (int)size; i++)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
}
return (-1);
}
