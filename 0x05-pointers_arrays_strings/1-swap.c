#include "main.h"

/**
 *swap_int - swaps the values of two integers
 *@a: first parameter
 *@b: seconed parameter
 */

void swap_int(int *a, int *b)
{
	int k;

	k = *b;

	*b = *a;

	*a = k;
}
