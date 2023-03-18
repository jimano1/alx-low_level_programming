#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Rerurn Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = radan() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printif("%d is negative\n", n);
	}
	return (0);
}
