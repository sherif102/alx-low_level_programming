#include "search_algos.h"

/**
 * linear_search - linear search algorithms
 * @array: array to be searched
 * @size: size of the array
 * @value: value to be searched
 * Return: success
 */

int linear_search(int *array, size_t size, int value)
{
	size_t counter = 0;

	while (counter < size)
	{
		printf("Value checked array[%li] = [%d]\n", counter, array[counter]);
		if (array[counter] == value)
			return (counter);
		counter++;
	}
	return (-1);
}
