#include "main.h"
/*
 * 2-strlen_recursion.c
 *
 *  Created on: Apr 28, 2024
 *      Author: absheriff
 */
/**
 * _strlen_recursion - return the length of the string
 * @s: parsed string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (!(*s))
		return 0;
	return 1 + _strlen_recursion(s + 1);
}
