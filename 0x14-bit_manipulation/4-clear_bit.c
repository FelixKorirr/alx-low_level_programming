#include "main.h"

/**
 * clear_bit - sets value of a bit to 0 at given index
 * @n: pointer to the number
 * @index: index of the bit
 * Return: 1(Success), -1(Fail)
 * korir codes
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = (~(1UL << index) & *n);
	return (1);
}
