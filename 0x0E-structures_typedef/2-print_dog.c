#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints the data of the dog
 * @d: dog structure
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->age == 0)
			d->age = 0;
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	else
		printf("(nil)");
}
