#include "main.h"
/**
 * -islower - print a function that checks for lowercase character
 *
 *  Return: 1 and 0 dependent on the condition
 */
int _islower(int c)
{
	char c;
	if (c >= 'a' && c <= 'z')
	
		return (1);
	else
		return (0);
}
