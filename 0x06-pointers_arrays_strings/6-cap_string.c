#include "main.h"
/*
 * 6-cap_string.c
 *
 *  Created on: Apr 11, 2024
 *      Author: absheriff
 */
/**
 * cap_string - capitalizes all words of the string
 * @c: supplied string
 * Return: capitalized strings
 */
char *cap_string(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if ((c[i] == ' ') || (c[i] == '\t') || (c[i] == '\n'))
		{
			if ((c[i + 1] >= 97) && (c[i + 1] <= 122))
				c[i + 1] = c[i + 1] - 32;
		}

		if ((c[i] == ',') || (c[i] == ';') || (c[i] == '.'))
		{
			if ((c[i + 1] >= 97) && (c[i + 1] <= 122))
				c[i + 1] = c[i + 1] - 32;
		}

		if ((c[i] == '!') || (c[i] == '?') || (c[i] == '"'))
		{
			if ((c[i + 1] >= 97) && (c[i + 1] <= 122))
				c[i + 1] = c[i + 1] - 32;
		}

		if ((c[i] == '(') || (c[i] == ')') || (c[i] == '{') || (c[i] == '}'))
		{
			if ((c[i + 1] >= 97) && (c[i + 1] <= 122))
				c[i + 1] = c[i + 1] - 32;
		}

		i++;
	}

	if ((c[0] >= 97) && (c[0] <= 122))
		c[0] = c[0] - 32;

	return (c);
}
