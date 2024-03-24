#include "main.h"
#include <stdio.h>
/*
 * positive_or_negative.c
 *
 *  Created on: Jan 20, 2024
 *      Author: absheriff
 */

void positive_or_negative(int i)
{
	if(i<0) printf("%d is negative\n", i);
	else if(i==0) printf("%d is zero\n", i);
	else printf("%d is positive\n", i);
}
