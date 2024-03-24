/*
 * 101-print_comb4.c
 *
 *  Created on: Jan 1, 2024
 *      Author: absheriff
 */
#include <stdio.h>
/**
 * main - prints three different digits combination
 * Return: success
 */
int main(void)
{
	int f, s, l;

	for (f = '0'; f <= '7'; f++)
	{
		for (s = '1'; s <= '8'; s++)
		{
			for (l = '2'; l <= '9'; l++)
			{
				if (!(s <= f) && !(l <= s))
				{
					putchar(f);
					putchar(s);
					putchar(l);

					if (!(f == '7' && s == '8' && l == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
