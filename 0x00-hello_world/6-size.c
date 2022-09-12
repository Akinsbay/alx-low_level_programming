#include <stdio.h>

/**
 * main - print the size of various type
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %i byte(s)\n", sizeof(a));
	printf("Size of an int: %i byte(s)\n", sizeof(b));
	printf("SIze of a long int: %i byte(s)\n", sizeof(c));
	printf("Size of a long long int: %i byte(s)\n", sizeof(d));
	printf("size of a float: %i byte(s)\n", sizeof(e));
	return (0);
}
