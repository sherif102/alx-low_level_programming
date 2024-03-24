#include "main.h"
/*
 * 5-sign.c
 *
 *  Created on: Jan 7, 2024
 *      Author: absheriff
 */

/**
 * print_sign - prints the sign of a number
 * Return: success
 * @c: supplied argument
 * r: return value
 */
int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		r = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		r = 0;
		_putchar('0');
	}
	else
	{
		r = -1;
		_putchar('-');
	}
	return (r);
}
