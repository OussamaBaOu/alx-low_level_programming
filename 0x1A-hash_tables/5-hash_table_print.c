#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: pointer to hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *a;
	unsigned long int b;
	unsigned char c;

	c = 0
	if (ht == NULL)
		return;
	printf("{");
	for (b = 0; b < ht->size; b++)
	{
		if (ht->array[b] != NULL)
		{
			if (c == 1)
				printf(", ");
			a = ht->array[b];
			while (a != NULL)
			{
				printf("'%s': '%s'", a->key, a->value);
				a = a->next;
				if (a != NULL)
					printf(", ");
			}
			c = 1;
		}
	}
	printf("}\n");
}
