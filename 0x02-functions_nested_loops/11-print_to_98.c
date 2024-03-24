#include "main.h"
#include <stdio.h>
/*
 * 11-print_to_98.c
 *
 *  Created on: Jan 10, 2024
 *      Author: absheriff
 */

/**
 * print_to_98 - prints from the supplied number to 98
 * Return: success
 * @n: supplied number
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;

			if (n == 98)
			{
				printf("%d\n", n);
				break;
			}
		}
	}

	else if (n == 98)
		printf("%d\n", n);

	else
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;

			if (n == 98)
			{
				printf("%d\n", n);
				break;
			}
		}
	}
}
