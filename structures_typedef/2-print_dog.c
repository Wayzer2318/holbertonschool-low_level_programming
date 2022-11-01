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
		printf("name: (nil)\nAge: %f\nOwner: (nil)", d->age);
	else
		printf("name: %s\nAge: %f\nOwner: %s", d->name, d->age, d->owner);
		
}
