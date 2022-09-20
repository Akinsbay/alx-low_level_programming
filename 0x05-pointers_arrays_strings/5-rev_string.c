#include "main.h"

/**
 * rev_string - reverse a string.
 *
 *@s: the string to be reversed.
 */

void rev_string(char *s)
{
	int len, l, m;
	char v1, v2;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	l = len - 1;
	m = 0;

	while (l > m)
	{
		v1 = s[m];
		v2 = s[l];
		s[m] = v2;
		s[l] = v1;
		l--;
		m++;
	}
}
