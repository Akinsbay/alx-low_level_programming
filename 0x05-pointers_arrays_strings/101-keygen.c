#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - print password.
 *
 * Return: 0.
 */

int main(void)
{
	int ascii = 2772, k = 0, j, random;
	char password[100];
	time_t t;

	srand((int) time(&t));
	while (ascii > 126)
	{
		random = rand() % 126;
		password[k] = random;
		ascii -= random;
		k++;
	}
	if (ascii > 0)
		password[k] = ascii;
	else
	{
		k--;
	}
	for (j = 0; j <= k; j++)
	{
		printf("%c", password[j]);
	}
	return (0);
}
