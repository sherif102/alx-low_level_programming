#include "main.h"
/*
 * 4-isalpha.c
 *
 *  Created on: Jan 7, 2024
 *      Author: absheriff
 */

/**
 * _isalpha - checks for alphabet characters
 * Return: success
 * @c: supplied argument
 * s: string iterator
 * r: return value
 */

int _isalpha(int c)
{
	int s, r;

	for (s = 65; s <= 90; s++)
	{
		if (c >= 65 && c <= 90)
		{
			r = 1;
		}
		else if (c >= 97 && c <= 122)
		{
			r = 1;
		}
		else
		{
			r = 0;
		}
	}
	return (r);
}
