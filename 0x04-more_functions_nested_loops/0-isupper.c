#include "main.h"
/*
 * 0-isupper.c
 *
 *  Created on: Feb 2, 2024
 *      Author: absheriff
 */
/**
 * _isupper - checks for upper or lower case character
 * @c: input character
 * r: return value
 * Return: 1 if upper otherwise 0
 */

int _isupper(int c)
{
	int r;

	if (c >= 65 && c <= 90)
	{
		r = 1;
	}else
	{
		r = 0;
	}

	return (r);
}
