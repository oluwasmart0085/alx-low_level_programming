#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative  - Entry point
 * @i: value needed.
 * Return: absolute 0 (success)
 */

void positive_or_negative(int i)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
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
		printf("%d is negative\n", n);
	}

	return (0);
}
