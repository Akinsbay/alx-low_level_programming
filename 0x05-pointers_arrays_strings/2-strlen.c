#include "main.h"

/**
 * _strlen - to returns the length of a string
 *@s: string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *(s + len) != '\0';)
		len++;

	return (len);
}
