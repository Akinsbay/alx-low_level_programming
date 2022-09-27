#include "main.h"

/**
 * _strchr - locate character in a string
 * @s: string to be searched
 * @c: character to be located
 * Return: If c is found - a pointer to its first occurrence
 *         If c is not found - Null
 */
char *_strchr(char *s, char c)
{
	int w;

	for (w = 0; s[w] >= '\0'; w++)
	{
		if (s[w] == c)
			return (s + w);
	}
	return ('\0');
}
