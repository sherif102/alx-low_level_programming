#include "main.h"
/*
 * 3-print_numbers.c
 *
 *  Created on: Feb 3, 2024
 *      Author: absheriff
 */
/**
 * print_numbers - outputs out the digit from 0 - 9
 * i: iterator
 * Return: success
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
