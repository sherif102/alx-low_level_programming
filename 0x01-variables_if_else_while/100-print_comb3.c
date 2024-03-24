/*
 * 100-print_comb3.c
 *
 *  Created on: Jan 1, 2024
 *      Author: absheriff
 */
#include <stdio.h>

/**
 * main - prints combination of different 2 digit numbers
 * Return: success
 */

int main(void)
{
	int f, l;

	for (f = '0'; f <= '9'; f++)
	{
		for (l = '1'; l <= '9'; l++)
		{
			if (!(l <= f))
			{
				putchar(f);
				putchar(l);

				if (!(l == '9' && f == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
