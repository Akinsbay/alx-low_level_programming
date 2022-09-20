#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src, including \0.
 *@src: pointer.
 *@dest: pointer.
 *Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int k, len;

	for (len = 0; src[len] != '\0'; len++)
	{
	}

	for (k = 0; k <= len ; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}
