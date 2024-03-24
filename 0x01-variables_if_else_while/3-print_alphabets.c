/*
 * 3-print_alphabets.c
 *
 *  Created on: Dec 31, 2023
 *      Author: absheriff
 */


#include <stdio.h>

int main(){
	char c, s;
	for(c = 'a'; c <= 'z'; c++)
		putchar(c);
	for(s = 'A'; s <= 'Z'; s++)
		putchar(s);
	putchar('\n');
	return (0);
}
