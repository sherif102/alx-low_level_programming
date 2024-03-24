#include "main.h"
/*
 * 5-more_numbers.c
 *
 *  Created on: Feb 4, 2024
 *      Author: absheriff
 */
/**
 * more_numbers - prints numbers in repetitions
 * Return: success
 * i: iterator for 10
 * x: counter for 14
 */
void more_numbers(void)
{
	int i, x;

	for (i = 0; i < 10; i++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
				_putchar('1');
			}
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}
