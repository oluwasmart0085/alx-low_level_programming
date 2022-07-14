#include "main.h"

/**
 * print_number - Function to print integer
 * @n: the integer
 * Return: int
 */

void print_number(int n)
{
	unsigned int num;

	if  (n < 0)
	{
		putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	if  (num / 10)
	{
		print_number(num / 10);
	}
	putchar(num % 10 + '0');
}
