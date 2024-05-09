#include "main.h"
#include <stdio.h>
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
	int i = _strlen_recursion(s);

	if (i <= 1)
		return (1);

	if (s[0] != s[i - 1])
		return (0);

	s[i - 1] = '\0';

	return (is_palindrome(s + 1));
}
