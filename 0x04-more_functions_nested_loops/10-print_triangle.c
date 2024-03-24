#include "main.h"
/*
 * 10-print_triangle.c
 *
 *  Created on: Feb 6, 2024
 *      Author: absheriff
 */
/**
 * print_triangle - print triangle
 * Return: success
 * @size: triangle size
 * i: spacebar iterator
 * x: triangle size iterator
 * c: copied size
 */
void print_triangle(int size)
{
	int i, x, c;

	x = 1;
	c = size;

	if (c <= 0)
		_putchar('\n');
	while (size > 0)
	{
		for (i = size; i > 1; i--)
			_putchar(' ');
		for (i = 0; i < x; i++)
			_putchar('#');
		_putchar('\n');
		size--;
		x++;
	}
}
