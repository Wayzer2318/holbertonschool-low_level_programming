#include "lists.h"
/**
 * free_dlistint - Function that frees a dlistint_t list.
 * @head: pointer to the first node
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
