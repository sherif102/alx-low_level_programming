#include "main.h"
/**
 * clear_bit - sets the bit value to 0 at index given
 * @n: parsed value
 * @index: index to clear
 * Return: 1 if it worked and -1 if otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int x = *n;

	if (index > 63)
		return (-1);

	if (x >= (1 << x))
		*n = *n ^ 1 << index;

	return (1);
}
