#include "main.h"
#include <stdbool.h>
/*
 * 0-is_prime.c
 *
 *  Created on: Feb 7, 2024
 *      Author: absheriff
 */
/**
 * is_prime - checks if a given number is a prime number
 * @x: input value
 * r: return true or false
 */
int is_prime(signed long x)
{
	unsigned long int i;
	int r;

	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			r = 0;
			break;
		}
		else
			r = 1;
	}
	return (r);
}
