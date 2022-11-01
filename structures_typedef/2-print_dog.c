#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print the dog info
 * @d: dog struct
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL || d->owner == NULL)
		printf("Name: (nil)\nAge: %f\nOwner: (nil)\n", d->age);
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
		
}
