#include "main.h"
/*
 * 9-times_table.c
 *
 *  Created on: Jan 7, 2024
 *      Author: absheriff
 */

/**
 * times_table - prints the times table from 0 - 9
 * Return: void
 * t: number times
 * i: number iterator
 * r: multiplication result
 * m: modulus result
 */

void times_table(void)
{
	int t, i, r, m;

	for (t = 0; t < 10; t++)
	{
		for (i = 0; i < 10; i++)
		{
			r = t * i;

			if (r > 9)
			{
				m = r % 10;
				r = (r - m) / 10;
				_putchar(r + '0');
				_putchar(m + '0');
			}
			else
				_putchar(r + '0');

			if ((i < 9))
			{
				_putchar(',');
				_putchar(' ');

				if (t * (i + 1) < 10)
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
