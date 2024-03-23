#include "list.h"
/**
 * print_dlistint -prints all the elements of a
 * dlistint_t list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current = malloc(sizeof(dlistint_t));
	int count = 0;

	while (h->prev)
		h = h->prev;
	*current = *h;
	while (current)
	{
		printf("%d", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
