#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to starting point of linked list
 * @n: element to initialize node with
 * Return: the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *start = *head;
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (start == NULL)
	{
		*head = node;
		return (node);
	}

	for (; start->next != NULL;)
		start = start->next;
	start->next = node;

	return (node);
}
