#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t node;

	node->n = n;
	node->next = *head;
}
