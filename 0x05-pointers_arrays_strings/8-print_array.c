#include "main.h"
#include <stdio.h>

/**
 * print_array - print an array.
 * @a: the array to print.
 * @n: array's length
 */

void print_array(int *a, int n)
{
	int h;

	for (h = 0; h < n; h++)
	{
		printf("%d", a[h]);
		if (h < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
