#include "main.h"

/**
 * _memset - to assign memory location to n byte
 * @s: A pointer to the memory area to be filled
 * @b: The character to fill the memory area with
 * @n: The number of bytes to be filled
 * Return: pointer to filled memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int lp;

	char *memory = s, value = b;

	for (lp = 0; lp < n; lp++)
		memory[lp] = value;

	return (memory);
}
