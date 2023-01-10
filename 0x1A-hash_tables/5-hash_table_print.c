#include "hash_tables.h"

/**
 * hash_table_print - prints out the key:value stored in a hash table.
 * @ht: the hash table to print out.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *ptr;
	unsigned char coma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			if (coma == 1)
				printf(", ");
			ptr = ht->array[index];
			while (ptr)
			{
				printf("'%s': '%s'", ptr->key, ptr->value);
				ptr = ptr->next;
				if (ptr != NULL)
					printf(", ");
			}
			coma = 1;
		}
	}
	printf("}\n");
}
