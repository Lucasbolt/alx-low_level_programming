#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key @key.
 * @ht: the hash table to check for @key indexed value.
 * @key: the key mapped to the value to be retrieved.
 * Return: returns the value if @key exists, else, returns NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *ptr;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (index > ht->size)
		return (NULL);

	ptr = ht->array[index];

	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
			return (ptr->value);
		ptr = ptr->next;
	}
	return (NULL);
}
