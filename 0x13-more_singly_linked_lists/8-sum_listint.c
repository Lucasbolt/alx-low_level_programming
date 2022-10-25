#include "lists.h"

/**
 * sum_listint - calculates the sum of data(n) of a linked list
 * @head: starting point node
 * Return: returns the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
