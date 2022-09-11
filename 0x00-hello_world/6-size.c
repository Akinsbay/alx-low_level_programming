#include <stdio.h>
/**
 * main - printing the size of various type
 *
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("size of a char: %ld bytes(s)\n", sizeof(c));
	printf("size of an int: %ld bytes(s)\n", sizeof(i));
	printf("size of a long int: %ld byte(s)\n", sizeof(li));
	printf("size of a long long int: %ld byte(s)\n", sizeof(lli));
	printf("size of a float: %ld bytes(s)\n", sizeof(f));
	return (0);
}
