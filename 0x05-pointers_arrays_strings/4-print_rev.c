#include "main.h"

/**
 *print_rev - to prints a string in reverse
 *@s: string to reverse
 */

void print_rev(char *s)
{
	int n;
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
		for (n = len - 1; n >= 0; n--)
		{
		_putchar(s[n]);
		}
	}
	_putchar('\n');
}
