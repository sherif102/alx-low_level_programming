#include "main.h"
#include <stdio.h>
/*
 * 8-print_arrays.c
 *
 *  Created on: Mar 26, 2024
 *      Author: absheriff
 */
/**
 * print_array - prints the n numbers of element from an array
 * @a: passed array
 * @n: number of elements to be printed
 * x: iterator
 * Return: void
 */

void print_array(int *a, int n)
{
	int x = 0;

	while (x < n)
	{
		printf("%d", a[x]);

		if (x != (n - 1))
			printf(", ");
		x++;
	}
	printf("\n");
}
