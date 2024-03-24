#include <stdio.h>
/*
 * 101-natural.c
 *
 *  Created on: Jan 15, 2024
 *      Author: absheriff
 */

/**
 * main - prints out sum of multiples of 3 and 5 in < 1024
 * Return: Success
 * i: iterator
 * r: result
 */
int main(void)
{
	int i, r;

	r = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			r += i;
	}
	printf("%d\n", r);
	return (0);
}
