#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a linked list
 * @head: pointer to the address of starting node
 * @n: element to initialize node with
 * Return: return created node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node != NULL)
	{
		node->n = n;
		node->next = *head;
		*head = node;
	}
	return node;
}
