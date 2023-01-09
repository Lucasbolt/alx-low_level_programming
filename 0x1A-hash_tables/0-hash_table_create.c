#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table of the size @size.
 * @size: size of table to be initialized.
 * Return: returns pointer to the created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable;
	hash_node_t **Array;
	unsigned long int i;

	htable = malloc(sizeof(hash_table_t));
	if (htable == NULL)
		return (NULL);

	Array = malloc(sizeof(hash_node_t *) * size);
	for (i = 0; i < size; i++)
		Array[i] = NULL;
	htable->size = size;
	htable->array = Array;

	return (htable);
}
