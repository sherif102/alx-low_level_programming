#include "main.h"
#include <stdio.h>

int _strlen_recursion(char *s);
/*
 * 101-wildcmp.c
 *
 *  Created on: May 9, 2024
 *      Author: absheriff
 */
/**
 * wildcmp - compare two values and check if they are identical
 * @s1: the first string
 * @s2: the second string
 * Return: 1 if true otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	int r;
	int i = _strlen_recursion(s1);
	int j = _strlen_recursion(s2);

	if ((s1[0] != s2[0]) && s2[0] != '*')
		return (0);
	if ((s2[0] == '*') && (s2[j - 1] == s1[i - 1]))
		return (1);
	if (s1[0] == s2[0])
		r = 1;
	if (s2[0] == '*' && s2[1] == '\0')
		return (1);
	if (s2[0] == '*')
		return wildcmp(s1, (s2 + 1));

	if ((s1[0] != '\0') || (s2[0] != '\0'))
		return wildcmp((s1 + 1), (s2 + 1));

	return (r);
}


int _strlen_recursion(char *s)
{
	if (!(*s))
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
