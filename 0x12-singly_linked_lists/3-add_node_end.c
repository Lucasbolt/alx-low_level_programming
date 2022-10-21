#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a node at the end of linked list
 * @head: starting point of node
 * @str: str to initialize node with
 * Return: returns pointer to node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *last;

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = node;
	}
	return (node);
}
