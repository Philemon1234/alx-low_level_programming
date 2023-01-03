#include "main.h"

/**
 * _memset - Function that fills the memory with a constant byte
 * @s: The pointer pointed to by the bytes
 * @c: the character to fill the memory area with.
 * @n: the size of the byte
 * description_memset: over there
 * Return: On success @s
 */

void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
