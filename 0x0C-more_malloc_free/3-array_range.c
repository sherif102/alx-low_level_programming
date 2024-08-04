#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates array of integers
 * @min: starting value
 * @max: ending value
 * Return: pointer to the newly created array or NULL on failure
 */
int *array_range(int min, int max)
{
	int x;
	int y = 0;
	int *ip;

	if (min > max)
		return (NULL);

	x = (max - min) + 1;
	ip = malloc(x * sizeof(min));
	if (ip == NULL)
		return (NULL);

	while (min <= max)
	{
		ip[y] = min;
		y++;
		min++;
	}
	return (ip);
}
