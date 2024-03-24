#include "main.h"
/*
 * 2-print_alphabet_x10.c
 *
 *  Created on: Jan 6, 2024
 *      Author: absheriff
 */
/**
 * print_alphabet_x10 - prints alphabets in lowercase ten times
 * Return: 1
 */
void print_alphabet_x10(void)
{
	int c, i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
