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
	int j = 0;

	/* condition for the first seven word separator */
	while (c[i] != '\0')
	{
		if ((c[i] == ' ') || (c[i] == '\t') || (c[i] == '\n') || (c[i] == ',') || (c[i] == ';') || (c[i] == '.') || (c[i] == '!'))
		{
			if ((c[i + 1] >= 97) && (c[i + 1] <= 122))
				c[i + 1] = c[i + 1] - 32;
		}

		i++;
	}

	/* condition for the second six word separator */
	while (c[j] != '\0')
	{
		if ((c[j] == '?') || (c[j] == '"') || (c[j] == '(') || (c[j] == ')') || (c[j] == '{') || (c[j] == '}'))
		{
			if ((c[j + 1] >= 97) && (c[j + 1] <= 122))
				c[j + 1] = c[j + 1] - 32;
		}

		j++;
	}

	return (c);
}
