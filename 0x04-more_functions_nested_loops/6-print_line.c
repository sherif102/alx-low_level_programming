#include "main.h"
/*
 * 6-print_line.c
 *
 *  Created on: Feb 5, 2024
 *      Author: absheriff
 */
/**
 * print_line - print lines
 * @n: number of times line should be printed
 * Return: success
 */

void print_line(int n)
{
	while (n > 0)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
