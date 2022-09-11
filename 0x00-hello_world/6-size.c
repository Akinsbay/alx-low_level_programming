#include <stdio.h>
/**
 * main - printing the size of various type
 *
 * Return: 0
 */
int main(void)
{	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("size of char: %lu bytes(s)\n", sizeof(c));
	printf("size of int: %lu bytes(s)\n", sizeof(i));
	printf("size of long int: %lu byte(s)\n", sizeof(li));
	printf("size of long long int: %lu byte(s)\n", sizeof(lli));
	printf("size of float: %lu bytes(s)\n", sizeof(f));
	return (0);
}
