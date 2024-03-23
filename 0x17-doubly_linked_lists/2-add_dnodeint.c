#include "lists.h"
/**
 * add_dnodeint -adds new node to the begining
 * @head: head of the list
 * @n: data of the node
 * Return: the number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *curr = malloc(sizeof(dlistint_t));
	dlistint_t *tmp;

	if (curr == NULL)
		return (NULL);
	tmp = *head;
	curr->n = n;
	curr->next = NULL;
	curr->prev = NULL;
	while (tmp->prev && tmp)
		tmp = tmp->prev;
	curr->next = *tmp;
	*tmp = curr;
		return (curr);
}
