#include "lists.h"
/**
 * add_dnodeint_end - Function that adds a new node
 * at the end of a dlistint_t list.
 * @head: double pointer to the first node
 * @n: value
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *temp;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return ('\0');
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->next = *head;
		*head = node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node;
		node->prev = temp;
	}
	return (node);
}
