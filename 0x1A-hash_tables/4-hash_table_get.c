#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with
 * a certain key in the hash table
 * @ht: pointer to hash table
 * @key: key to get the value of
 * Return: NULL if key is not matched
 * else - value associated with key
 * korir codes
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new_node;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}

	idx = key_index((const unsigned char *)key, ht->size);

	if (idx >= ht->size)
	{
		return (NULL);
	}

	new_node = ht->array[idx];
	while (new_node && strcmp(new_node->key, key) != 0)
		new_node = new_node->next;

	return ((new_node == NULL) ? NULL : new_node->value);
}
