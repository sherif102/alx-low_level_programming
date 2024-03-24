/*
 * 2-print_alphabet.c
 *
 *  Created on: Dec 25, 2023
 *      Author: absheriff
 */


#include <stdio.h>
#include <ctype.h>

int main(){
	//it converts every input characters into lowercase
	char s;
	s = getchar();
	s = tolower(s);
	printf("%c\n\n", s);

	//prints all alphabet a-z in lowercase
	char l;
	for(l = 'a'; l<='z'; l++)
		putchar(l);
		putchar('\n');
}
