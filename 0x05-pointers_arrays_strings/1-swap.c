#include "main.h"
/*
 * 1-swap.c
 *
 *  Created on: Feb 23, 2024
 *      Author: absheriff
 */
/**
 * swap_int - interchanges the value of the supplied variables
 * @a: value 1
 * @b: value 2
 * c: copied value for changing
 *
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
