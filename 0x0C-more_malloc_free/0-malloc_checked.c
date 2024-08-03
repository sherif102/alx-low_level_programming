#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: value passed
 * Return: 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *i;

	i = malloc(sizeof(i) * b);
	if (i == NULL)
		exit(98);
	return (i);
}
