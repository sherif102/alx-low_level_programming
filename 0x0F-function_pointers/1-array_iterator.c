#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_iterator - executes given function on each array element
 * @array: array passed
 * @size: array size
 * @action: callback function
 * Return: Success
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (action != NULL && array != NULL)
	{
		for (x = 0; x < size; x++)
		{
			action(array[x]);
		}
	}
}
