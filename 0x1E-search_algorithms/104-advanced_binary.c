#include "search_algos.h"

/**
  * advanced_binary_recursive - Searches recursively for a value in a sorted
  * array of integers using binary search.
  * @array: Pointer to the first element of the [sub]array to search.
  * @left: Starting index of the [sub]array to search.
  * @right: Ending index of the [sub]array to search.
  * @value: Value to search for.
  * Return: If the value is not present, -1.
  * else, the index where the value is located.
  */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
size_t x;
if (right < left)
{
return (-1);
}
printf("Searching in array: ");
for (x = left; x < right; x++)
printf("%d, ", array[x]);
printf("%d\n", array[x]);
x = left + (right - left) / 2;
if (array[x] == value && (x == left || array[x - 1] != value))
{
return (x);
}
if (array[x] >= value)
{
return (advanced_binary_recursive(array, left, x, value));
}
return (advanced_binary_recursive(array, x + 1, right, value));
}

/**
  * advanced_binary - Function searches for a value in a sorted array
  * of integers using advanced binary search.
  * @array: Pointer to the first element of the array to search.
  * @size: number of elements in the array.
  * @value: value to search for.
  * Return: If value is not present or array is NULL, -1.
  * Otherwise, the first index where the value is located.
  */

int advanced_binary(int *array, size_t size, int value)
{
if (array == NULL || size == 0)
{
return (-1);
}
return (advanced_binary_recursive(array, 0, size - 1, value));
}
