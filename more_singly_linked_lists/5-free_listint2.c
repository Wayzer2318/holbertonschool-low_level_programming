#include "lists.h"
#include <stdio.h>
/**
 * free_listint2 - free a list
 * @head: the pointer to the head
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head)
	{
		while (*head)
		{
			tmp = *head;
			*head = tmp->next;
			free(tmp);
		}
	}
}
