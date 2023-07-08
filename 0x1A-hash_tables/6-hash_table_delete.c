#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: pointer to hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *a = ht;
	hash_node_t *b, *c;
	unsigned long int d;

	for (d = 0; d < ht->size; d++)
	{
		if (ht->array[d] != NULL)
		{
			b = ht->array[d];
			while (b != NULL)
			{
				c = b->next;
				free(b->key);
				free(b->value);
				free(b);
				b = c;
			}
		}
	}
	free(a->array);
	free(a);
}
