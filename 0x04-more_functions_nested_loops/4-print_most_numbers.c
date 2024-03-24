#include "main.h"
/*
 * 4-print_most_numbers.c
 *
 *  Created on: Feb 3, 2024
 *      Author: absheriff
 */
/**
 * print_most_numbers - prints number 0-9 without 4 and 2
 * Return: success
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
