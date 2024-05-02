#include "main.h"
/*
 * 6-is_prime_number.c
 *
 *  Created on: May 2, 2024
 *      Author: absheriff
 */
/**
 * is_prime_number - check if a number is a prime number
 * @n: supplied integer
 * Return: 1 if is prime or 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
		return (0);

	return (1);
}
