#include "main.h"

/**
 * _isupper - to check if a character is uppercase or not
 * @c: character to be tested
 * Return: 1 if uppercase, otherwise 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
