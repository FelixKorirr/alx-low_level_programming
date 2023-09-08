#include "hash_tables.h"

/**
 * hash_table_delete - frees the hash table
 * @ht: pointer to hash table
 * korir codes
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *newnode, *current;
	unsigned long int x;

	if (!ht)

		return;

	for (x = 0; x < ht->size; x++)
	{
		newnode = ht->array[x];
		while (newnode)
		{
			current = newnode;
			newnode = newnode->next;
			if (current->key)
			{
				free(current->key);
			}
			if (current->value)
			{
				free(current->value);
			}
			free(current);
		}
	}
	free(ht->array);
	free(ht);
}
