#include "main.h"

/**
 * more_numbers - to prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int c;
	int a;

	for (c = 0; c < 10; c++)
	{
		for (a = 0; a <= 14, a++)
		{
			if (a > 9)
			{
				_putchar((a / 10) + 48);
			}
			_putchar((a % 10) + 48);
		}
		_putchar(10);
	}
}