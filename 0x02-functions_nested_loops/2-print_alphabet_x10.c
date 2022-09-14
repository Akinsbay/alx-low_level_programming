#include "main.h"
/**
 * print_alphabet_x10 - function to print  alphabet
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char j;
	char p;

	j = 0;
	while (j < 10)
		j++
	{
		p = 'a';
		while (p <= 'z')
		{
			_putchar(p);
				p++;
		}
	}
	_putchar('\n');
}
