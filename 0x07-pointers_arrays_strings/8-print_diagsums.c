#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers.
 * @a: input
 * @size: input
 *
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
int sum4, sum5, x;

sum4 = 0;
sum5 = 0;

for (x = 0 ; x < size; x++)
{
sum4 = sum4 + a[x * size + x];
}
for (x = size - 1; x >= 0; x--)
{
sum5 += a[x * size + (size - x - 1)];
}
printf("%d, %d\n", sum4, sum5);
}
