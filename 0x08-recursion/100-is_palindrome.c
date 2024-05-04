#include "main.h"
#include <stdio.h>
/*
 * 100-is_palindrome.c
 *
 *  Created on: May 2, 2024
 *      Author: absheriff
 */
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string supplied
 * Return: 1 if true 0 otherwise
 */
int is_palindrome(char *s)
{
	int i = 0;
	int r, f, b;

	if (*s == (" " || "\0"))
		return (1);

	while (s[i])
		i++;

	b = i - 1;

	for (f = 0; f < ((i / 2) + 1); f++)
	{
		if (s[f] != s[b])
		{
			r = 0;
			break;
		}
		r = 1;
		b--;
	}

	return (r);
}
