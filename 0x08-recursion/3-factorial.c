#include "main.h"
/*
 * 3-factorial.c
 *
 *  Created on: Apr 28, 2024
 *      Author: absheriff
 */
/**
 * factorial - calculates the factorial
 * @n: integer given
 * Return: factorial result
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
