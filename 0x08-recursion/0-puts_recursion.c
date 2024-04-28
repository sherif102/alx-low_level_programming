#include "main.h"
/*
 * 0-puts_recursion.c
 *
 *  Created on: Apr 27, 2024
 *      Author: absheriff
 */
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string character
 * Return: success
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');

	if (!(*s == '\0'))
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
