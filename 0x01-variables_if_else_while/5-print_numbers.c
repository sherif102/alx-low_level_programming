/*
 * 5-print_numbers.c
 *
 *  Created on: Dec 31, 2023
 *      Author: absheriff
 */

#include <stdio.h>

/**
 * main - Prints digit from 0 - 9
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	putchar ('\n');
	return (0);
}
