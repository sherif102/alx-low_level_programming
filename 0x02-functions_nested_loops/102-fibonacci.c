#include <stdio.h>
/*
 * 102-fibonacci.c
 *
 *  Created on: Jan 18, 2024
 *      Author: absheriff
 */
/**
 * main - prints fibonacci of < 50
 * Return: success
 * i: iterator
 * fib1: fibonacci 1
 * fib2: fibonacci 2
 * r: result
 */
int main(void)
{
	int i;
	unsigned long int fib1, fib2, r;

	fib1 = 0, fib2 = 1;

	for (i = 0; i < 50; i++)
	{
		r = fib1 + fib2;

		printf("%lu", r);
		if (!(i == 49))
			printf(", ");
		else
			printf("\n");

		fib1 = fib2;
		fib2 = r;
	}
	return (0);
}
