#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr:
 * @old_size:
 * new_size:
 * Return: pointer to the newly allocated space
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int y;
	void *np;

	if (new_size > old_size)
	{
		np = malloc(new_size);
		if (np == NULL)
			return (NULL);
		for (y = 0; y < old_size ; y++)
			((char *)np)[y] = ((char *)ptr)[y];
	}
	if (new_size <= old_size)
		return (ptr);
	if (ptr == NULL)
	{
		np = malloc(new_size);
		if (np == NULL)
			return (NULL);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);
	return (np);
}
