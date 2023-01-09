#include "hash_tables.h"

/**
 * key_index - computes the index of a key @key using the djb2 algorithm.
 * @key: key to map the value to.
 * @size: size of the hash-table.
 * Return: returns the index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long size)
{
	return (hash_djb2(key) % size);
}
