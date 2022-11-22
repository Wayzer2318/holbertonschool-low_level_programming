#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t node;

	node->n = n;
	node_>prev = NULL;
	node->next = *head;
	return (node);
}
