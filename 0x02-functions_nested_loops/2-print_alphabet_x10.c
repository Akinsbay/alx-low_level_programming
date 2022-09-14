#include "main.h"
/**
 * print_alphabet_x10 - function to print alphabet
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char p;
	char j;

	for (j = 0; j < 10; j++)
	{
		for (p = 'a'; p <= 'z'; p++)
		{
			_putchar(p);
		}
	_putchar('\n');
}
