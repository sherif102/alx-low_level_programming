#include "main.h"
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
	unsigned int i = 0, j = 0, z = 0;
	unsigned int x;
	unsigned int y = -1;

	while (haystack[i] != '\0')
		i++;

	for (x = 0; x < i; x++)
	{
		if (needle[j] == haystack[x])
		{
			while (needle[j + z] == haystack[x + z])
			{
				if (needle[j] == needle[0])
				{
					if ((haystack[x - 1] == ' ') || (haystack[x - 1] == '\0'))
					{
						if (haystack[x + (z + 1)] == ' ')
						{
							if (needle[j + (z + 1)] == '\0')
							{
								y = x;
								break;
							}
						}

						if (haystack[x + (z + 1)] == '\0')
						{
							if (needle[j + (z + 1)] == '\0')
							{
								y = x;
								break;
							}
						}
					}
				}
				z++;
			}
			z = 0;
		}
		if (y == x)
			break;
	}
	haystack = haystack + y;

	if (y == -1)
		haystack = '\0';

	return (haystack);
}
