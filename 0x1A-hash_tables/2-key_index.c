#include "hash_tables.h"

/**
 * key_index - Gives the index of a key/value
 * @key: key to get the index of
 * @size: size of the array
 * Return: index of the key
 * Description: Uses the djb2 algorithm
 * korir codes
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
