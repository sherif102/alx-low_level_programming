#include "main.h"
/*
 * 4-print_rev.c
 *
 *  Created on: Mar 3, 2024
 *      Author: absheriff
 */
/**
 * print_rev - prints out the string in reverse order
 * @s: string supplied
 * i: iterator
 */
void print_rev(char *s)
{
	int len = _strlen(s)-1;

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
