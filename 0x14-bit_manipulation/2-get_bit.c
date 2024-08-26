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
	unsigned int r;

	r = n >> index;

	return (r % 2);
}
