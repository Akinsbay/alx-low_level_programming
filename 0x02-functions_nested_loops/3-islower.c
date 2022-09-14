#include "main.h"
/**
 * _islower - function that checks for lowercase character
 * @c: a character argument
 *  Return: 1 and 0 dependent on the condition
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{

		return (1);
	}
	else
		return (0);
}
