#include "main.h"

/**
 * _puts - Print a string
 * @str: The string to print
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		putchar(str[i]);

	putchar('\n');
}
