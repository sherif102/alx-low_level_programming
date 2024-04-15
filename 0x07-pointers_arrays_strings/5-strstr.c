#include "main.h"
#include <stdio.h>
/*
 * 5-strstr.c
 *
 *  Created on: Apr 14, 2024
 *      Author: absheriff
 */
/**
 * _strstr - locates substring
 * @haystack: string to search
 * @needle: character we are searching for
 * Return: success
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int x = 0;
	unsigned int z = 0;
	unsigned int y = 0;

	while (haystack[i] != '\0')
		i++;

	while (needle[j] != '\0')
	{
		for (; x < i; x++)
		{
			if (needle[j] == haystack[x])
			{
				while (haystack[x + z] == needle[j + z])
				{
					if ((needle[j + (z + 1)] == '\0') && ((haystack[x + (z + 1)] == ' ') || (haystack[x + (z + 1)] == '\0')))
					{
						y = x;
						break;
					}
					z++;
				}
				z = 0;
			}
		}

		if (y > 0)
			break;

		x = 0;
		j++;
	}

	if (y == 0)
		haystack = '\0';
	else
		haystack = haystack + y;

	return (haystack);
}
