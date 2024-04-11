#include "main.h"
/*
 * 7-leet.c
 *
 *  Created on: Apr 11, 2024
 *      Author: absheriff
 */
/**
 * leet - encodes the given string to 1337
 * @c: given string
 * Return: encoded string pointer
 */
char *leet(char *c)
{
	int j;
	int i = 0;
	int n[24] = {52, 51, 48, 55, 49};
	char cs[6] = "aeotl";
	char cc[6] = "AEOTL";

	while (c[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if ((c[i] == cs[j]) || (c[i] == cc[j]))
				c[i] = n[j];
		}

		i++;
	}

	return (c);
}
