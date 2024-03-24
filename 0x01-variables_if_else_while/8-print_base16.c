/*
 * 8-print_base16.c
 *
 *  Created on: Jan 1, 2024
 *      Author: absheriff
 */
#include <stdio.h>

/**
 * main - prints numbers of base 16 in lowercase
 * Return: success
 */
int main(void)
{
	char n, c;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
