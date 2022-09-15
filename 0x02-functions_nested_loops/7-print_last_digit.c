#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @t: parameter
 * Return: value of the last digit
 */
int print_last_digit(int t)
{
	int t;

	t = (t % 10);
	if (t < 0)
	{
		t = (-1 * t);
	}
	_putchar(t + '0');
	return (t);
}
