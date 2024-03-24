#include "main.h"
/*
 * 5-rev_string.c
 *
 *  Created on: Mar 3, 2024
 *      Author: absheriff
 */
/**
 * rev_string - reverses the supplied string backward
 * @s: pointer to the string
 * slen: string len
 * x: iterator
 * sc: the copied string
 * Return: void
 */
void rev_string(char *s)
{
	int slen = 0;
	int x = 0;
	char sc[1000];

	while (s[slen] != '\0')
		slen++;
	slen -= 1;

	while (slen >= 0)
	{
		sc[x] = s[slen];
		slen--;
		x++;
	}

	while (x >= 0)
	{
		s[slen] = sc[slen];
		slen++;
		x--;
	}
}
