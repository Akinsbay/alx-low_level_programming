#include "main.h"

/**
 * more_numbers - to prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int c;
	int a;

	for (a = 0; a < 10; a++)
	{
		for (c = 0; c <= 14, c++)
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
		}
		_putchar(0);
	}
}
