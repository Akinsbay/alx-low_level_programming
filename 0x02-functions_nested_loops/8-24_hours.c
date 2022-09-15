#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day
 * the minute loop count minutes and the hour loop count hours
 * and the loop breas break before passing 24 hour
 * Return: 24 hour clock
 */
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
