#include "main.h"
#include <stdio.h>
/*
 * 100-atoi.c
 *
 *  Created on: Mar 27, 2024
 *      Author: absheriff
 */
/**
 * _atoi - converts string to integer
 * @s: supplied string
 * x: iterator
 * Return: success
 */
int _atoi(char *s)
{
	int x = 0;
	int int_count = 48;
	int digit = 0;
	int cx;
	int r = 0;
	int result = 0;
	int sign = 1;

	while (s[x] != '\0')
	{
		cx = s[x] + 0;

		if (s[x] == '-')
			sign = sign * -1;
		else if (s[x] == '+')
			sign = sign * +1;

		while (int_count <= 57)
		{
			if (cx == int_count)
			{
				r = digit;

				if (result != 0)
					result = result * 10;

				result = result + r;
				break;
			}
			digit++;
			int_count++;
		}
		digit = 0;
		int_count = 48;

		if ((((s[x + 1] < 48) || (s[x + 1] > 57)) || (s[x + 1] == '\0')) && ((s[cx] >= 48) && (s[cx] <= 57)))
			break;

		x++;
	}
	return (result * sign);
}
