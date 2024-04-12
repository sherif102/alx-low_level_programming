#include "main.h"
/*
 * 3-strcmp.c
 *
 *  Created on: Apr 9, 2024
 *      Author: absheriff
 */
/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: compared result
 */
int _strcmp(char *s1, char *s2)
{
	int r;
	int i = 0;

	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			break;
		}

		r = s1[i] - s2[i];

		i++;
	}

	return (r);
}
