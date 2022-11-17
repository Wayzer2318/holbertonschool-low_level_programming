#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - add a new node
 * @head: a pointer to the head
 * @n: int
 * Return:  adress of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *tmp;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return ('\0');

	tmp = *head;
	while (tmp)
	{
		tmp->next = tmp;
	}
	node->n = n;
	node->next = NULL;
	tmp->next = node,
	return (node);
}
