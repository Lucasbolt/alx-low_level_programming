#include "lists.h"
size_t listint_len(const listint_t *h);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/**
 * myrevnode - reverses the linked list order
 * @head: pointer to the starting node
 * Return: returns the pointer to the new starting node
 */
listint_t *myrevnode(listint_t **head)
{
	listint_t *start = *head;
	listint_t *tmp;
	listint_t *node;
	unsigned int index = listint_len(start);

	start = *head;
	tmp = *head;
	node = get_nodeint_at_index(start, index);
	*head = node;
	index = index - 1;
	start = tmp;
	for (; index != 0; index--)
	{
		node->next = get_nodeint_at_index(start, index);
		node = node->next;
		start = tmp;
	}
	node->next = get_nodeint_at_index(start, 0);
    node = node->next;
	node->next = NULL;
    start = NULL;
    tmp = NULL;
	return (*head);

}
