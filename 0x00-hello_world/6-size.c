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

	printf("size of char: %ld bytes(s)\n", sizeof(c));
	printf("size of int: %ld bytes(s)\n", sizeof(i));
	printf("size of long int: %ld byte(s)\n", sizeof(li));
	printf("size of long long int: %ld byte(s)\n", sizeof(lli));
	printf("size of float: %ld bytes(s)\n", sizeof(f));
	return (0);
}
