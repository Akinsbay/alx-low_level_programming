#include "main.h"

/**
 *print_rev - to prints a string in reverse
 *@s: string to reverse
 */

void print_rev(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
		for (--n; n >= 0; --n)
		{
		_putchar(s[n]);
		}
	}
	_putchar('\n');
}
