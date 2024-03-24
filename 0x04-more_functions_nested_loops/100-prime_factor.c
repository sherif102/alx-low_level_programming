#include <stdio.h>
#include <limits.h>
#include "main.h"
/*
 * 100-prime_factor.c
 *
 *  Created on: Feb 6, 2024
 *      Author: absheriff
 */
/**
 * main - finds the largest prime factor of n value
 */

int main(void)
{
	signed long int n, x, c;

	n = 612852475143;

	for (x = 2; x < n; x++)
	{
		if ((n % x == 0) && is_prime(x))
		{
			c = x;
		}
	}
	printf("%lu\n", c);
}
