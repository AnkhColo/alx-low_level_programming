#include "main.h"

/**
 * swap_int - swaps value of two integers
 * @a: pointer to an integer that will be swapped
 * @b: pointer to an integer that will be swapped
 */

void swap_int(int *a, int *b)
{
	int r = *a;
	*a = *b;
	*b = r;
}
