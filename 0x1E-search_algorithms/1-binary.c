#include "search_algos.h"

/**
 * binary_search - Function that searches for a value in  sorted
 * array of integers using binary search algorithm
 * @array: Pointer to array
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of value, -1 if null
*/

#include <stdio.h>


int binary_search(int *array, size_t size, int value)
{
int left = 0;
int right = (int)size - 1;
int i = 0;

while (left <= right)
{
int mid = ((left + right) / 2);

printf("Searching in array: ");

for (i = left; i <= right; i++)
{
printf("%d", array[i]);
if (i < right)
{
printf(", ");
}
}
printf("\n");

if (value == array[mid])
{
return (mid);
}
else if (value < array[mid])
{
right = mid - 1;
}
else if (value > array[mid])
{
left = mid + 1;
}

}
return (-1);
}

