#include "main.h"
/**
 *_strstr - finds substring
*@haystack: the string to be serched.
*@needle: the substring to be found
 *
*Return: if the subscript is found - a  pointer to the begining
 *                                      of the located substring
 *              if the substring is not located - NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int lp;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		lp = 0;

		if (haystack[lp] == needle[lp])
		{
			do {
				if (needle[lp + 1] == '\0')
					return (haystack);
				lp++;
			} while (haystack[lp] == needle[lp]);
		}
		haystack++;
	}
	return ('\0');
}
