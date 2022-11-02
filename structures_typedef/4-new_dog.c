#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strdup - returns a pointer with a copy of the string
 * @str: string to copy
 * Return: char
 */
char *_strdup(char *str)
{
	char *arr;
	unsigned i = 0;
	unsigned j = 0;

	if (str == NULL)
		return ('\0');
	while(str[i])
		i++;
	arr = malloc(sizeof(char) * (i + 1));
	if (arr == NULL)
		return ('\0');
	while (str[j])
	{
		arr[j] = str[j];
		j++;
	}
	arr[j] = 0;
	return (arr);
}
/**
 * new_dog - function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: owner's dog name
 * Return: 0
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *namecp;
	char *ownercp;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return ('\0');
	namecp = _strdup(name);
	if (!namecp && name)
	{
		free(new);
		return('\0');
	}
	ownercp = _strdup(owner);
	if (!ownercp && owner)
	{
		free(namecp);
		free(new);
		return ('\0');
	}

	new->name = namecp;
	new->age = age;
	new->owner = ownercp;

	return (new);
}
