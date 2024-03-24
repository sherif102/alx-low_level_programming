#include "main.h"
/*
 * 6-puts2.c
 *
 *  Created on: Mar 24, 2024
 *      Author: absheriff
 */
/**
 * puts2 - prints next two character of a string
 * @str: the passed string pointer
 * x: iterator
 * Return: void
 */
void puts2(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x += 2;

		if (str[x - 1] == '\0')
			break;
	}
	_putchar('\n');
}
