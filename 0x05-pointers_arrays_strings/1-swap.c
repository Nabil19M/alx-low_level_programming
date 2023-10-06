#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a : first input integer.
 * @b : second input integer.
 * Return : no return value.
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
