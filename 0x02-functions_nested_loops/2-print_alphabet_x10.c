#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int x = 1;
	char y = 'a';
	while (x <= 10)
	{
		while (y <= 'z')
		{
			_putchar(y);
			y++;
		}
		y = 'a';
		_putchar('\n');
		x++;
	}
}
