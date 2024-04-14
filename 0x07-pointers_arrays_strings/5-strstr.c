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
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int x = 0;
	unsigned int y;

	while (haystack[i] != '\0')
		i++;

	while (needle[j] != '\0')
	{
		for (; x < i; x++)
		{
			if (needle[j] == haystack[x])
			{
				y = x;
				break;
			}
		}

		if (needle[j] == haystack[x])
			break;

		x = 0;
		j++;
	}

	if ((haystack[x] != needle[j]) || (needle[j] == '\0'))
		haystack = '\0';
	else
		haystack = haystack + y;

	return (haystack);
}
