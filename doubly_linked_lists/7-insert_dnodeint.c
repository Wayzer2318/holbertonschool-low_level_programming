#include "lists.h"
/**
 * insert_dnodeint_at_index - Function that inserts a
 * new node at a given position.
 * @h: address of the first node (double pointer)
 * @idx: index of the list where the new node should be added.
 * @n: data to enter in the new node
 * Return: address of the new node, or NULL if it failed, if
 * it is not possible to add the new node at index idx, do not
 * add the new node and return NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *temp2, *tempcount = *h;
	dlistint_t *node;
	unsigned int counter = 0;

	if (*h == NULL)
		return (0);
			while (tempcount != NULL)
			{
				tempcount = tempcount->next;
				counter++;
			}
	if (idx > counter)
		return ('\0');

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return ('\0');

	node->n = n;
	if (idx == 0)
	{
		node->prev = NULL, node->next = *h;
		if (*h)
			(*h)->prev = node;
		*h = node;
		return (node);
	}
	counter = 0;
	while (counter < idx)
		temp2 = temp, temp = temp->next;
	node->next = temp;
	node->prev = temp2;
	temp2->next = node;
	return (node);
}
