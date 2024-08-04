#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of space to be allocated
 * @size: variable size
 * Return: pointer to the allocated memory or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x = 0;
	char *ap;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ap = malloc(nmemb * size);
	if (ap == NULL)
		return (NULL);

	while (x < nmemb)
	{
		ap[x] = 0;
		x++;
	}

	return (ap);
}
