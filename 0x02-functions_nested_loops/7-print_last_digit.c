#include "main.h"
/*
 * 7-print_last_digit.c
 *
 *  Created on: Jan 7, 2024
 *      Author: absheriff
 */

/**
 * print_last_digit - prints the last digit
 * Return: success
 * @i: integer value
 * r: return value
 */

int print_last_digit(int i)
{
	int r;

	i = i % 10;
	r = i;
	if (i < 0)
	{
		r = -(i);
	}
	_putchar(r + '0');
	return (r);
}
