#include "main.h"
/*
 * 2-strlen.c
 *
 *  Created on: Feb 23, 2024
 *      Author: absheriff
 */
/**
 * strlen - returns the length of the supplied string
 * @*s: the parsed string
 * i: iterator
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
