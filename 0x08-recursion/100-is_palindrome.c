#include "main.h"
#include <stdio.h>

int _strlen_recursion(char *s);
/*
 * 100-is_palindrome.c
 *
 *  Created on: May 2, 2024
 *      Author: absheriff
 */
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string supplied
 * Return: 1 if true 0 otherwise
 */
int is_palindrome(char *s)
{
	int r = 0;
	int i = _strlen_recursion(s);

	if (i <= 1)
		return (1);
	if (s[0] != s[i - 1])
		return (0);

	if (s[0] == s[i - 1])
	{
		r = 1;
		s[i - 1] = '\0';
		return (is_palindrome(s + 1));
	}

	return (r);
}


/**
 * _strlen_recursion - calculates the length of the string
 * @s: supplied string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (!(*s))
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
