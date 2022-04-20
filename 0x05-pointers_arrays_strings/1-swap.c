#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: input integer
 * @b: input integer
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
