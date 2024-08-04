#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: memory space to reallocate
 * @old_size: the old memory size
 * new_size: the new memory size
 * Return: pointer to the newly allocated space
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int y;
	void *np;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		np = malloc(new_size);
		if (np == NULL)
			return (NULL);
		return (np);
	}

	if (new_size > old_size)
	{
		np = malloc(new_size);
		if (np == NULL)
			return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	for (y = 0; y < old_size && y < new_size; y++)
		((char *)np)[y] = ((char *)ptr)[y];

	free(ptr);
	return (np);
}
