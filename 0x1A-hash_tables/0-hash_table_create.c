#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *a;
	unsigned long int b;

	a = malloc(sizeof(hash_table_t));
	if (a == NULL)
		return (NULL);

	a->size = size;
	a->array = malloc(sizeof(hash_node_t *) * size);
	if (a->array == NULL)
		return (NULL);
	for (b = 0; b < size; b++)
		a->array[b] = NULL;
	return (a);
}
