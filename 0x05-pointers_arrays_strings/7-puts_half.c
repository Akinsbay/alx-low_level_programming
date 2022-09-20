#include "main.h"

/**
 * puts_half - prints the second half of a string.
 *@str: string to use.
 */

void puts_half(char *str)
{
	int len, t, q;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	t = (len - 1) / 2;
	for (q = t + 1; str[q] != '\0'; q++)
	{
		_putchar(str[q]);
	}
	_putchar('\n');
}
