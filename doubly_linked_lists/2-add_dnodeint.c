#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: double pointer address of node
 * @n: node to add
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		return ('\0');
	}
	node->n = n;
	node->prev = NULL;
	if (*head == NULL)
	{
		node = *head;
		node->next = NULL;
	}
	else
	{
		node->next = *head;
		(*head)->prev = node;
		*head = node;
	}
	return (node);
}
