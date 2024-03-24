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
	int b, i, r, m, r2, m2;

	if ((n <= 15) && (n >= 0))
	{
		for (b = 0; b <= n; b++)
		{
			for (i = 0; i <= n; i++)
			{
				r = b * i;
				if (r < 10)
				{
					_putchar(r + '0');
					if (!(i == n))
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						if ((b * (i + 1) < 10))
						{
							_putchar(' ');
						}
					}
				}
				else if ((b * (i + 1) < 100) && (r > 9))
				{
					m = r % 10;
					r = (r - m) / 10;
					_putchar(r + '0');
					_putchar(m + '0');
					if (!(i == n))
					{
						_putchar(',');
						_putchar(' ');
						if ((b * (i + 1)) < 100)
						{
							_putchar(' ');
						}
					}
				}
				else
				{
					m = r % 10;
					r = (r - m) / 10;
					m2 = r % 10;
					r2 = (r - m2) / 10;
					if (!(r2 == 0))
					{
						_putchar(r2 + '0');
					}
					_putchar(m2 + '0');
					_putchar(m + '0');
					if (!(i == n))
					{
						_putchar(',');
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
	}
}
