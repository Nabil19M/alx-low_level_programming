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

	if (curr == NULL)
		return (NULL);
	curr->n = n;
	curr->next = NULL;
	curr->prev = NULL;
	while (head->prev && head)
		head = head->prev;
	curr->next = *head;
	*head = curr;
		return (curr);
}
