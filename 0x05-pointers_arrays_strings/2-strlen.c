#include "main.h"

/**
 * _strlen - to returns the length of a string
 *@s: parameter
 *
 * Return: count
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != "\0"; ++s)
		count++;

	return (count);
}
