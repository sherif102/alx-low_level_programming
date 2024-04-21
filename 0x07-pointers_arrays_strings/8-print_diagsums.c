#include "main.h"
#include <stdio.h>
/*
 * 8-print_diagsums.c
 *
 *  Created on: Apr 21, 2024
 *      Author: absheriff
 */
/**
 * print_diagsums - prints the sums of two diagonal
 * @a: square integer to work with
 * @size: the size of the matrix
 * Return: success
 */
void print_diagsums(int *a, int size)
{
	int i;
	int irev = (size * size) - 1;
	long unsigned int r1 = 0;
	long unsigned int r2 = 0;

	for (i = 0; i < (size * size); i += (size + 1))
		r1 = r1 + a[i];

	for (i = (irev - (size - 1) ); i >= 0; i -= (size - 1))
		r2 = r2 + a[i];

	printf("%lu, %lu\n", r1, r2);
}
