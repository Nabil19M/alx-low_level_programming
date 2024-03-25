#include "lists.h"
/**
 * get_dnodeint_at_index - get the the nth node by index;
 * @head: head of the list
 * @index: index of the node we return
 * Return: returns the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (index > dlistint_len(head))
		return (NULL);
	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while (index--  && head != NULL)
	{
		head = head->next;
	}
	return (head);
}
