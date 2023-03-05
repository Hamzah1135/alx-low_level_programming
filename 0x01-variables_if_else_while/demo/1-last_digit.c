#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* This program assigns a random number to the variable */
/* It prints the last digit of the number stored in the variable */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	return (0);
}
