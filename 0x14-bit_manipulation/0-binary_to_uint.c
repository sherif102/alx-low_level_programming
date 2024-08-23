#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_to_uint - converts binary number to unsigned integer
 * @b: binary parsed
 * Return: converted number or 0 if otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	size_t count = 0;
	size_t i = 0;
	size_t m = 1;
	size_t c;
	size_t result = 0;

	if (b == NULL)
		return (0);

	while (b[count] != '\0')
		count++;

	while (b[i] != '\0')
	{
		if (b[i] > 49 || b[i] < 48)
			return (0);
		c = count - 1;

		while (c > 0)
		{
			m = m * 2;
			c--;
		}
		m = m * (b[i] - 48);
		result = result + m;
		m = 1;
		i++;
		count--;
	}
	return (result);
}
