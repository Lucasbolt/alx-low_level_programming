#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at a particular index @idx
 * @head: pointer to head node
 * @idx: index
 * @n: element to initialize the node with
 * Return: the node on success or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *start = *head;
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	if (idx == 0)
	{
		node->n = n;
		node->next = start;
		*head = node;
		return (node);
	}

	for (; i < idx - 1 && start != NULL; i++)
		start = start->next;
	if (start == NULL)
		return (NULL);
	node->n = n;
	node->next = start->next;
	start->next = node;
	return (node);
}
