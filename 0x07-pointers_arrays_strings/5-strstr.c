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
	unsigned int i = 0; /* j = 0, x = 0, z = 0; */
	unsigned int j = 0;
	unsigned int x;
	unsigned int z = 0;
	unsigned int y = -1;

	while (haystack[i] != '\0')
		i++;

	while (needle[j] != '\0')
	{
		for (x = 0; x < i; x++)
		{
			printf("%d\n", j);
			printf("%d\n", x);

			if (needle[j] == haystack[x])
			{
				while ((needle[j + z] == haystack[x + z]) && (needle[j] == needle[0]))
				{
					if ((haystack[x + (z + 1)] == ' ') || (haystack[x + (z + 1)] == '\0'))
					{
						if (needle[j + (z + 1)] == '\0')
						{
							y = x;
							break;
						}
					}
					printf("%d\n", j);
					z++;
				}
				z = 0;
			}
			if (y == x)
				break;
		}
		j++;
		if (y == x)
			break;
	}

	haystack = haystack + y;

	printf("%d\n", y);

	if (y == -1)
		haystack = '\0';

	return (haystack);
}
