#include "lists.h"
/**
 * add_dnodeint_end -adds new node to the ending
 * @head: head of the list
 * @n: data of the node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr = malloc(sizeof(dlistint_t));
	dlistint_t *tmp;

	if (curr == NULL)
		return (NULL);
	tmp = *head;
	curr->n = n;
	curr->next = NULL;
	curr->prev = NULL;
	if (*head == NULL)
	{
		*head = curr;
		return (curr);
	}
	if (tmp != NULL)
		while (tmp->next)
			tmp = tmp->next;
	curr->prev = tmp;
	tmp->next = curr;
	return (curr);
}
