#include "main.h"

/**
 * main - print alphabet in lowercase
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char alphabet;

	alphabet = 'a';
		while (alphabet <= 'z')
	{
		_putchar(alphabet)
			alphabet++;
	}
		_putchar('\n');
		return (0);
}

