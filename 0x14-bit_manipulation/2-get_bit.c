#include "main.h"
#include <stdlib.h>
/**
 * get_bit - finds the bit value at a given index
 * @n: parsed value
 * @index: index
 * Return: bit value at index or -1 otherwise
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int r;

	r = n >> index;

	if (index > 63)
		return (-1);

	return (r % 2);
}
