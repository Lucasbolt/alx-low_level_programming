#include "hash_tables.h"

/**
 * hash_table_set - maps @key to @value in a hash table @ht.
 * @ht: the hash table to be used.
 * @key: the key to map against @value in @ht.
 * @value: the value mapped to @key in @ht.
 * Return: returns 1 on success, or 0 if error occurs.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int long index, i;
	char *valueC;
	hash_node_t *new, *ptr;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	valueC = strdup(value);
	if (valueC == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = valueC;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(valueC);
		return (0);
	}
	new->key = strdup(key);
	new->value = valueC;
	new->next = NULL;
	if (ht->array[index] != NULL)
	{
		ptr = ht->array[index];
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
		return (1);
	}
	ht->array[index] = new
	return (1);
}
