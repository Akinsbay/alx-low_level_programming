#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char l;

	l = 'a';
		while (l <= 'z')
	{
		_putchar(l);
			l++;
	}
		_putchar('\n');
}

