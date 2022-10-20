#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints the element of a linked list
 * @h: the starting node
 * Return: returns number of nodes in a linked list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		count++;
	}
	return (count);
}
