#include <stdio.h>
/*
 * 9-fizz_buzz.c
 *
 *  Created on: Feb 6, 2024
 *      Author: absheriff
 */
/**
 * main - prints logically some task
 * Return: success
 * i: iterator
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	return (0);
}
