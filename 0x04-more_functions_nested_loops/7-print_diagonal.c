#include "main.h"
/*
 * 7-print_diagonal.c
 *
 *  Created on: Feb 5, 2024
 *      Author: absheriff
 */
/**
 * print_diagonal - print diagonally
 * Return: 0
 * @n: number of times slash should be printed
 * i: copied n
 * x: spacebar iterator
 * c: x counter
 */
void print_diagonal(int n)
{
	int i, x, c;

	c = 0;
	i = n;

	while (n >= 0)
	{
		if (i <= 0)
		{
			_putchar('\n');
			break;
		}
		if (n > 0)
		{
			for (x = 0; x <= c; x++)
			{
				if (x == 0)
					continue;
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
		n--;
		c++;
	}
}
