#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates new dog from type_def
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: dog created
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;

	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
		return (NULL);

	dog1->name = name;
	dog1->owner = owner;
	dog1->age = age;

	return (dog1);
}
