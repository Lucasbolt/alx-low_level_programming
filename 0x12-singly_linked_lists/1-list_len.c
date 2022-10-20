#include "lists.h"

/**
 * list_len - calculates the number of element in a linked list
 * @h: starting node
 * Return: number of element
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
		count++;
	return (count);
}
