#include "main.h"

/**
 * print_last_digit - Displays the last digit
 * @c: prints the last digit
 * Return: On success 1.
 */

int print_last_digit(int c)
{
	int last;
	last = c % 10;
	if (c < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
