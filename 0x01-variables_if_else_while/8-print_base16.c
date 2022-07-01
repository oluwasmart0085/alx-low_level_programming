#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: void
 */

int main(void)
{
	char i, j;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	for (j = 'a'; j < 'g'; j++)
	{
		putchar(j);
	}
	putchar('\n');

	return (0);
}
