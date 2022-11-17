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
	node->n = n;
	node->next = NULL;

	if (*head)
	{
		*head = node;
		return (node);
	}
	else
	{
		tmp = *head;
		while (tmp)
		{
			tmp = tmp->next;
		}
		tmp->next = node;
	}
	return (node);
}
