#include <stdio.h>
/*
 * 103-fibonacci.c
 *
 *  Created on: Jan 18, 2024
 *      Author: absheriff
 */
/**
 * main - prints the sum of the even-valued numbers
 * Return: success
 * r: fib1 and fib2 sum
 * fib1: fibonacci 1
 * fib2: fibonacci 2
 * o: total even number sum output
 */
int main(void)
{
	unsigned long r, fib1, fib2, o;

	fib1 = 0, fib2 = 1, o = 0;
	r = fib1 + fib2;
	while (r <= 4000000)
	{
		if ((r % 2) == 0)
			o += r;

		fib1 = fib2;
		fib2 = r;
		r = fib1 + fib2;
	}
	printf("%lu\n", o);
	return (0);
}
