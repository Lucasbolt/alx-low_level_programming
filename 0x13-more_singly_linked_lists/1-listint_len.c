#include "lists.h"

/**
 * listint_len - counts number of elements in a linked list
 * @h: starting node (pointer)
 * Return: returns the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->n)
			count++;
		h = h->next;
	}
	return (count);
}
