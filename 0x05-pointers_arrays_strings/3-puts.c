#include "main.h"
/*
 * 3-puts.c
 *
 *  Created on: Mar 3, 2024
 *      Author: absheriff
 */
/**
 * _puts - prints out the string supplied
 * @s: supplied string
 * i: iterator
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
