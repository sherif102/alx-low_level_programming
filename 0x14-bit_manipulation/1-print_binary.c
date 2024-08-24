#include "main.h"
/**
 * print_binary - prints binary representation of a number
 * @n: number parsed
 * Return: success
 */
void print_binary(unsigned long int n)
{
	int flag, i;
	int x = 32;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (x >= 0)
	{
		i = n >> x;
		if (i & 1)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1)
			_putchar('0');
		x--;
	}
}
