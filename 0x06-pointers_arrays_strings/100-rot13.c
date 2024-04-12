#include "main.h"
/*
 * 100-rot13.c
 *
 *  Created on: Apr 11, 2024
 *      Author: absheriff
 */
/**
 * rot13 - encodes the given string using rot13
 * @c: supplied string
 * Return: encoded string pointer
 */
char *rot13(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		while (((c[i] >= 97) && (c[i] <= 122)) || ((c[i] >= 65) && (c[i] <= 90)))
		{
			if ((c[i] + 13 > 122) || ((c[i] + 13 > 90) && (c[i] + 13 < 104)))
				c[i] = (c[i] + 13) - 26;

			else
				c[i] = c[i] + 13;

			break;
		}

		i++;
}

	return (c);
}
