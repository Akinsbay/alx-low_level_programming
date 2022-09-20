#include "main.h"

/**
 * _puts - print a string
 * @str: the  string
 *
 * Return: no error
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0';)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar(10);
}
