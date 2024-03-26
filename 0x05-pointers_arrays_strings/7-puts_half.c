#include "main.h"
/*
 * 7-puts_half.c
 *
 *  Created on: Mar 24, 2024
 *      Author: absheriff
 */
/**
 * puts_half - prints the half part of the string
 * @str: supplied string
 * x: iterator
 * slen: string lenght
 * Return: void
 */
void puts_half(char *str)
{
	int x = 0;
	int slen;

	while (str[x] != '\0')
		x++;
	slen = (x + 1) / 2;
	if (x % 2 == 0)
		slen = x / 2;
	while (slen <= x)
	{
		_putchar(str[slen]);
		slen++;
	}
	_putchar('\n');
}
