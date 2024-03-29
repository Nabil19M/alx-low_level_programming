#include "lists.h"
/**
 * add_dnodeint -adds new node to the begining
 * @head: head of the list
 * @n: data of the node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *curr = malloc(sizeof(dlistint_t));
	dlistint_t *tmp;

	if (curr == NULL)
		return (NULL);
	tmp = *head;
	curr->n = n;
	curr->prev = NULL;
	if (tmp != NULL)
	{
		while (tmp->prev)
			tmp = tmp->prev;
		tmp->prev = curr;
	}
	curr->next = *head;
	*head = curr;
		return (curr);
}
