#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: no to search
 * @index: index of the bit
 * Return: value of the bit or -1 if error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
	{
		return (-1);
	}

	value = (n >> index) & 1;

	return (value);
}
