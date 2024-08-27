#include "main.h"
/**
 * flip_bits - finds the number of bits needed to
 * flip from one number to another
 * @n: from value
 * @m: to value
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int result = 0;
	int i = 63;

	while (i >= 0)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			result++;
		i--;
	}

	return (result);
}
