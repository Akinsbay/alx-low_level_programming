#include "main.h"

/**
 * _memcpy - function that copy memory location
 * @dest: A pointer to the memory area to copy @src into
 * @src: The source to copy character from
 * @n: The number of bytes to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int lp;

	char *destination = dest;

	char *source = src;

	for (lp = 0; lp < n; lp++)
	{
		destination[lp] = source[lp]
	}
	return (dest);
}
