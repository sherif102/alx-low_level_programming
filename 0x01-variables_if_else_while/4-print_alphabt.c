/*
 * 4-print_alphabt.c
 *
 *  Created on: Dec 31, 2023
 *  Author: absheriff
 */


#include <stdio.h>

/**
 * main - print letter a-z excluding q and e
 * Return: success
 */
int main(void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
	{
		if (s == 'q') continue;
		else if (s == 'e') continue;
		putchar (s);
	}
	putchar('\n');

	return (0);
}
