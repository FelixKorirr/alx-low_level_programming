#include "hash_tables.h"

/**
 * hash_djb2 - function implementing djb2 algorithm.
 * @str: string to hash
 * Return: calculated hash
 * korir codes
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hsh;
	int x;

	hsh = 5381;
	while ((x = *str++))
	{
		hsh = ((hsh << 5) + hsh) + x;
	}

	return (hsh);
}
