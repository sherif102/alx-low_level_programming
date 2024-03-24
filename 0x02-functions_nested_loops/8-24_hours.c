#include "main.h"
/*
 * 8-24_hours.c
 *
 *  Created on: Jan 7, 2024
 *      Author: absheriff
 */

/**
 * jack_bauer - prints every minutes in a day
 * Return: success
 * fh: first hour
 * h: hour
 * fm: first minute
 * m: minute
 */

void jack_bauer(void)
{
	int fh, h, fm, m;

	fh = 0;
	fm = 0;
	for (h = 0; h <= 10;)
	{
		if ((fh == 2 && h == 3) && (fm > 5 || m == 9))
			break;

		if (h == 10)
		{
			fh++;
			h = 0;
		}
		if (fm > 5 || m == 9)
		{
			fm = 0;
			h++;
			continue;
		}
		else
		{
			for (m = 0; m < 10; m++)
			{
				_putchar(fh + '0');
				_putchar(h + '0');
				_putchar(':');
				_putchar(fm + '0');
				_putchar(m + '0');
				_putchar('\n');
			}
			fm++;
		}
	}
}
