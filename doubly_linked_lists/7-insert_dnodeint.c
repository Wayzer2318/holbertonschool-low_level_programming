#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *node;
	unsigned int counter = 0;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (0);

	node->n = n;
	temp = *h;

	while (counter != idx)
		temp = temp->next;
	temp->next = node;
	node->prev = temp;
	return (node);
}
