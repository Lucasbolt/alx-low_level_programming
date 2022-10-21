#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a node at the beginning of a linked list
 * @head: pointer to the first node
 * @str: string to initialize
 * Return: returns pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = strlen(str);
	node->next = *head;
	*head = node;
	return (node);

}
