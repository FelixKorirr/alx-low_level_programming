#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: number to look for
 * @index: index of bit
 * Return: bit value
 * korir codes
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_number;

	if (index > 63)
	{
		return (-1);
	}

	bit_number = (n >> index) & 1;

	return (bit_number);
}
