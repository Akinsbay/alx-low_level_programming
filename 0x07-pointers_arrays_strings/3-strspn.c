#include "main.h"

/**
 *_strspn - gets the length of a prefix substring.
 *@s: The string to be searched
 *@accept: The prefix to be measured
 *Return: the number of bytes in s which
 *        consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int lp;

	while (*s)
	{
		for (lp = 0; accept[lp]; lp++)
		{
			if (*s == accept[lp])
			{
				bytes++;
				break;
			}
			else if (accept[lp + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}

