#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free the dog structure memory
 * @d: dog structure to be freed
 * Return: Success
 */
void free_dog(dog_t *d)
{
	free(d);
}
