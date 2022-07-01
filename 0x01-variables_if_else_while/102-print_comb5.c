#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: void
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if ((i == 0 && j != 0) || (j > i))
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');
				if (i < 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return(0);
	
}
