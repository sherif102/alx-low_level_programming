/*
 * File: 1-last_digit.c
 * Desc: It checkts if the last number of the randomly generated int
 * Author: absheriff
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints the last digit of the randomly generated numbers
 * Return: 0
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	last = n % 10;

	if (last != 0 && last < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	else if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else
		printf("Last digit of %d is %d and is 0\n", n, last);

	return (0);
}
