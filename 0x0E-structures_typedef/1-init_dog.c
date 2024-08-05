#include "dog.h"
/**
 * init_dog - initializes the dog structure
 * @d: dog structure pasrsed
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: Success
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
