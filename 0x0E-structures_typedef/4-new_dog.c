#include "dog.h"
#include <stdlib.h>
#include <string.h>
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
	char *new_name;
	char *new_owner;

	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
	{
		free(dog1);
		return (NULL);
	}

	new_name = malloc(strlen(name) + 1);
	if (new_name == NULL)
	{
		free(dog1);
		return (NULL);
	}
	strcpy(new_name, name);

	new_owner = malloc(strlen(owner) + 1);
	if (new_owner == NULL)
	{
		free(dog1);
		return (NULL);
	}
	strcpy(new_owner, owner);

	dog1->name = new_name;
	dog1->owner = new_owner;
	dog1->age = age;

	return (dog1);
}
