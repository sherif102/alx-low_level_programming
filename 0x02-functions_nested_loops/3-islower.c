#include "main.h"
/*
 * 3-islower.c
 *
 *  Created on: Jan 6, 2024
 *      Author: absheriff
 */
/**
 * _islower - check if a character is lower or not
 * Return: success
 * @c: argument supplied
 * s: character iterator
 * r: return value
 */
int _islower(int c)
{
	int s, r;

	for (s = 'a'; s <= 'z'; s++)
	{
		if (c == s)
		{
			r = 1;
			break;
		}
		else if (c < 'a' || c > 'z')
		{
			r = 0;
			break;
		}
	}
	return (r);
}
