#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array
 * @size: number of space to allocate
 * @c: character to be assigned
 * Return: 0 if success NULL otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *ap;
	unsigned int x;

	ap = malloc(size * sizeof(c));

	if (size == 0)
		return (NULL);

	for (x = 0; x < size; x++)
		*(ap + x) = c;

	if (!(ap))
		return (NULL);

	return (ap);
}
