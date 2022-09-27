#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: the string to be searched
 * @c: character to be located
 * Return: If c is found - a pointer to its first occurrence
 *         If c is not found - NULL
 */
char *_strchr(char *s, char c)
{
	int lp;

	for (lp = 0; s[lp] >= '\0'; lp++)
	{
		if (s[lp] == c)
			return (s + lp);
	}
	return ('\0');
}
