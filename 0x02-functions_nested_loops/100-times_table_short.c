#include "main.h"
/*
 * 100-times_table.c
 *
 *  Created on: Jan 10, 2024
 *      Author: absheriff
 */

/**
 * print_times_table - prints the times table of the supplied number
 * Return: success
 * @n: value supplied
 * b: base value
 * i: iterator
 * r: result value
 * m: modulo result
 * r2: second result value
 * m2: second modulo value
 */
void print_times_table(int n)
{
	int b, i, r;

	if ((n <= 15) && (n >= 0))
	{
		for (b = 0; b <= n; b++)
		{
			for (i = 0; i <= n; i++)
			{
				r = b * i;

				if (i == 0)
					_putchar(r + '0');
				else if (r < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(r + '0');
				} else if (r < 100 && r > 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(r / 10 + '0');
					_putchar(r % 10 + '0');
				} else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(r / 100 + '0');
					_putchar((r / 10) % 10  + '0');
					_putchar(r % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
