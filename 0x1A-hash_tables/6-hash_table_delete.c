#include "hash_tables.h"

/**
 * hash_table_delete - Deletes hash table.
 * @ht: pointer to a hash table
 * korir codes
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *new_node, *current;
	unsigned long int x;

	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			new_node = ht->array[x];
			while (new_node != NULL)
			{
				current = new_node->next;
				free(new_node->key);
				free(new_node->value);
				free(node);
				new_node = current;
			}
		}
	}
	free(head->array);
	free(head);
}
