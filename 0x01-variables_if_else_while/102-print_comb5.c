/*
 * 102-print_comb5.c
 *
 *  Created on: Jan 1, 2024
 *      Author: absheriff
 */
#include <stdio.h>
/**
 * main - prints combinations of two-two different digits separated by comma
 * Return: success
 */
int main(void)
{
	int f, s, t, l;

	for (f = '0'; f <= '9'; f++)
	{
		for (s = '0'; s <= '9'; s++)
		{
			for (t = '0'; t <= '9'; t++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					if (((t + l) > (s + f) && t >= f) || f < t)
					{
						putchar(f);
						putchar(s);
						putchar(' ');
						putchar(t);
						putchar(l);
					if (!(f == '9' && s == '8'))
					{
					putchar(',');
					putchar(' ');
					}
					}
					else
					{
						continue;
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
