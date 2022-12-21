#include "main.h"

/**
 * function swaps the values of two integers
 * @a: this is the first entry
 * @b: this is the second entry
 *
 */
void swap_int(int *a, int *b)
{
	int valueChanged = *a;
	*a = *b;
	*b = valueChanged;
}
