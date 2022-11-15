#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_list - free a list
 * @head: the head of the list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
