#include <stdio.h>
/*
 * 104-fibonacci.c
 *
 *  Created on: Jan 18, 2024
 *      Author: absheriff
 */
/**
 * main - prints the first 98 fibonacci numbers
 * Return: success
 * i: iterator
 * fb1: fibonacci 1
 * fb2: fibonacci 2
 * r: result
 *
 */
int main(void)
{
	int i;
	unsigned long fb1, fb2, r;

	fb1 = 0, fb2 = 1;
	for (i = 0; i < 99; i++)
	{
		r = fb1 + fb2;
		printf("%lu", r);

		fb1 = fb2;
		fb2 = r;

		if (!(i == 98))
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
