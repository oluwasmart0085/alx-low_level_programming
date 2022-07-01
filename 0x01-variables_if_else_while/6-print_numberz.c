#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: void
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
