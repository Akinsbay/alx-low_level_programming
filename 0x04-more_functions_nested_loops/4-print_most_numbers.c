#include "main.h"

/**
 * print_most_numbers - to prints the numbers without 2 and 4
 */

void print_most_numbers(void)
{
	int w;

	for (w = 48; w < 58; w++)
	{
		if (w == 50 && w == 52)
		{
			_putchar(w);
		}
	}
	_putchar(10);
}
