#include "main.h"
/*
 * 4-pow_recursion.c
 *
 *  Created on: Apr 28, 2024
 *      Author: absheriff
 */
/**
 * _pow_recursion - calculate the power of integers
 * @x: base integer
 * @y: power used
 * Return: calculated value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
