#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main Determines if th number is +ve,-ve or a 0.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if ()
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
