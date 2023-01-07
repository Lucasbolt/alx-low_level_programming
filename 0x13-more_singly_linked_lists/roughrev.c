#include "lists.h"

/**
 * roughrev - my rough version of the reverse node function
 * @head: pointer to the starting node
 * Return: returns the pointer to the new starting node
 */
listint_t *roughrev(listint_t **head)
{
	listint_t *start = *head;
	listint_t *ahead;
	listint_t *behind = NULL;

	while (start->next != NULL)
	{
		ahead = start->next;
		start->next = behind;
		behind = start;
		start = ahead;
	}
	start->next = behind;
    *head = start;

	return (*head);
}
