#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 * @c: parameter
 * Return: absolute value of a number
 */
int _abs(int c)
{
	if (c < 0)
		c = -c;
	return (c);
}
