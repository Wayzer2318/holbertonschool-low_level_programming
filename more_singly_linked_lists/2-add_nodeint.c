#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - add a new node
 * @head: a pointer to the head
 * @n: int
 * Return:  adress of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return ('\0');
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
