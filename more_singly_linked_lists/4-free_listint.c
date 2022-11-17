#include "lists.h"
#include <stdio.h>
/**
 * free_listint - free a lsit
 * @head: the head of the list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t tmp;

	while (head)
	{
		head = tmp;
		head = head->next;
		free(head->n);
		free(tmp);
	}
}
