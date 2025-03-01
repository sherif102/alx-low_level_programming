#include "search_algos.h"

/**
 * binary_search - searches for value in binary data
 * @array: array to be searched
 * @size: size of the array
 * @value: value to be searched
 * Return: success
 */

 int binary_search(int *array, size_t size, int value)
 {
	int L, R, m;

	L = 0;
	R = size - 1;
	m = (L + R) / 2;

	while (L <= R)
	{
		array_printer(array, L, R);
		if (array[m] > value)
			R = m - 1;
		else
			L = m + 1;
		m = (L + R) / 2;
		if (array[m] == value)
		{
			array_printer(array, L, R);
			return (m);
		}
	}
	return (-1);
 }


 /**
  * array_printer - print array
  * @array: array to print
  * @start: starting point
  * @stop: ending point
  * Return: success
  */
 void array_printer(int *array, int start, int stop)
 {
	int counter = start;

	printf("Searching in array: ");
	while (counter < stop)
		printf("%d, ", array[counter++]);
	printf("%d\n", array[stop]);
 }
