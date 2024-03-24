#include "main.h"
/*
 * 1-alphabet.c
 *
 *  Created on: Jan 6, 2024
 *      Author: absheriff
 */

/**
 * print_alphabet - prints all the alphabets in lowercase
 * Return: 1
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
