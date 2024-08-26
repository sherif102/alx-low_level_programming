#include "main.h"
/**
 * set_bit - set bit value
 * @n: value parsed
 * @index: index to set
 * Return: 1 if it worked and -1 if otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1;
	unsigned long int r = *n;

	if (index > 63)
		return (-1);

	while (index > 0)
	{
		x = x * 2;
		index--;
	}

	r = *n | x;

	return (r);
}
