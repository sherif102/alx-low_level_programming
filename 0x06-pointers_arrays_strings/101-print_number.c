	#include "main.h"
/*
 * 101-print_number.c
 *
 *  Created on: Apr 12, 2024
 *      Author: absheriff
 */
/**
 * print_number - prints an integer
 * @n: supplied integer
 * Return: success
 */
void print_number(int n)
{
	int r;
	int j;

	if (n < 0)
	{
		n = n * (-1);
		_putchar('-');
	}


	r = n % 10;
	j = n - r;

	if (n > 9)
	{
		if ((n > 999) && (n < 10000))
		{
			_putchar((n / 1000) + '0');
			_putchar(((n / 100) % 10) + '0');
			_putchar(((j / 10) % 10) + '0');
			_putchar(r + '0');
		}
		if ((n > 99) && (n < 1000))
		{
			_putchar((n / 100) + '0');
			_putchar(((j / 10) % 10) + '0');
			_putchar(r + '0');
		}
		if (n < 100)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
	}

	if (n < 10)
		_putchar(n + '0');

}
