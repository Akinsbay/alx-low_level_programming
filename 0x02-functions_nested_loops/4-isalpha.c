#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 * @c: a character arguement
 * Return: 0
 */
int _isalpha(int c)
{
	if (c >= 'a' || 'A' && c <= 'z' || 'Z')
	{
		return (1);		}
	else
		return (0);
}
