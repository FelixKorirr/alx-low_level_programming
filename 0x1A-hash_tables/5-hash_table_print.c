#include "hash_tables.h"

/**
 * hash_table_print - Prints the hash table
 * @ht: pointer to the hash table
 * Description: Key pairs are printed in the order
 *              they appear in the hash table
 * korir codes
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *new_node;
	unsigned char y = 0;
	unsigned long int x;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			if (y == 1)
				printf(", ");

			new_node = ht->array[x];
			while (new_node != NULL)
			{
				printf("'%s': '%s'", new_node->key, new_node->value);
				new_node = new_node->next;
				if (new_node != NULL)
					printf(", ");
			}
			y = 1;
		}
	}
	printf("}\n");
}
