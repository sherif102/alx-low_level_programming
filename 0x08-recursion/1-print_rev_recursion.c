#include "main.h"
#include <stdio.h>
/*
 * 1-print_rev_recursion.c
 *
 *  Created on: Apr 28, 2024
 *      Author: absheriff
 */
/**
 * _print_rev_recursion - prints string in reverse
 * @s: supplied string
 * Return: success
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
