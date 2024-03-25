#include "lists.h"
/**
 * sum_dlistint - get the sum of data in linkedlist
 * @head: head of the list
 * Return: returns the sum of all data(n)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (NULL);
	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
