#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - print the elements in a linked list
 * @h: starting node of linked list
 * Return: number of elements printed
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		count++;
	}
	return (count);
}
