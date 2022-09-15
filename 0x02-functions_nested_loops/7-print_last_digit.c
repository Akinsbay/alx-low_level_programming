#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @t: parameter
 * Return: value of the last digit
 */
int print_last_digit(int t)
{
	int w;

	w = (t % 10);
	if (w < 0)
	{
		w = (-1 * w);
	}
	_putchar(w + '0');
	return (w);
}
