#include "hash_tables.h"

/**
 * hash_table_set - Add or update the hash table
 * @ht: pointer to hash table
 * @key: The key to add
 * @value: value associated with key
 * Return: 0 if it fails else -1
 * korir codes
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *cpy;
	unsigned long int idx, x;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}
	cpy = strdup(value);
	if (cpy == NULL)
	{
		return (0);
	}
	idx = key_index((const unsigned char *)key, ht->size);

	for (x = idx; ht->array[x]; x++)
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			free(ht->array[x]->value);
			ht->array[x]->value = cpy;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(cpy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = cpy;
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1); }
