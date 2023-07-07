#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: pointer to hash table.
 * @key: key to get value.
 * Return: If key not matched - NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *a;
	unsigned long int b;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	b = key_index((const unsigned char *)key, ht->size);
	if (b >= ht->size)
		return (NULL);
	a = ht->array[b];
	while (a && strcmp(a->key, key) != 0)
		a = a->next;
	return ((a == NULL) ? NULL : a->value);
}
