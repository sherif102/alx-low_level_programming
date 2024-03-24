#include "main.h"
#include <stdio.h>
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
	int slen = 1;
	int x = 0;
	char sc[slen];

	while (s[slen] != '\0')
		slen++;
	slen -= 1;

	/** reverse string */
	while (slen >= 0)
	{
		sc[x] = s[slen];
		slen--;
		x++;
	}
	/**	sc[x] = '\0'; */

	while (x >= 0)
	{
		s[slen] = sc[slen];
		slen++;
		x--;
	}
}
