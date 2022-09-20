#include "main.h"

/**
 * print_rev - to print a string in reverse.
 *
 *@s: the string to print in reverse.
 *
 */

void print_rev(char *s)
{
	int k = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	for (k = i - 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
