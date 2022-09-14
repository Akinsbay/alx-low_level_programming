#include "main.h"

/**
 * main - print alphabet in lowercase
 *
 * Return: always 0
 */
int main(void)
{
	char alphabet;

	while (alphabet = 'a')
	{
		_putchar(alphabet);
		for (alphabet <= 'z')
			alphabet++;
	}
		_putchar('\n');
		return (0);
}

