#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strlen - length of a string
 * @s: string
 * Return: length
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * add_node_end - add a new node at the end
 * @str: string to add
 * @head: the node in the head, first node
 * Return: a new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *result = malloc(sizeof(list_t));
	list_t *temp;

	if (result == NULL)
		return ('\0');
	result->len = strlen(str);
	result->str = strdup(str);	
	result->next = NULL;
	if (*head == NULL)
		*head = result;
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = result;
	}
	
	return (result);
}
