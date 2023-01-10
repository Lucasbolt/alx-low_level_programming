#include "hash_tables.h"

/**
 * hash_table_print - prints out the key:value stored in a hash table.
 * @ht: the hash table to print out.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *ptr;

	if (ht == NULL)
		printf("{}\n");
	else
	{
		printf("{");
		for (index = 0; index < ht->size; index++)
		{
			if (ht->array[index] != NULL && ht->array[index]->next == NULL)
			{
				printf("'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
				if (index <  ht->size - 1)
					printf(", ");
			}
			else if (ht->array[index] != NULL && ht->array[index]->next != NULL)
			{
				ptr = ht->array[index];
				while(ptr)
				{
					printf("'%s': '%s'", ptr->key, ptr->value);
						if (index < ht->size - 1 && ptr->next != NULL)
							printf(", ");
					ptr = ptr->next;
				}
			}
		}
		printf("}\n");
	}
}
