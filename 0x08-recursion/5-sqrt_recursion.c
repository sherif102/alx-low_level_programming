#include "main.h"
/*
 * 5-sqrt_recursion.c
 *
 *  Created on: Apr 29, 2024
 *      Author: absheriff
 */
/**
 * _sqrt_recursion - returns the square root
 * @n: supplied value
 * Return: return square root of n or -1 if not
 */
int _sqrt_recursion(int n)
{
	if (n == (0 || 1))
		return (1);
	if (n < 0)
		return (-1);

	return (1 + _sqrt_recursion(n - 2));
}
