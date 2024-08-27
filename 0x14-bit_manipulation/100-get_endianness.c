#include "main.h"
/**
 * get_endianness - checks teh endianness
 * Return: 0 if big endian and 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;;

	if (*c)
		return (1);
	else
		return (0);
}
