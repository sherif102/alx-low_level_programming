#include "main.h"
/*
 * 8-print_square.c
 *
 *  Created on: Feb 6, 2024
 *      Author: absheriff
 */
/**
 * print_square - print square
 * Return: success
 * @size: square size
 * i: vertical iterator
 * x: horizontal iterator
 * c: copied size
 *
 */

void print_square(int size)
{
	int i, x;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (x = 0; x < size; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
