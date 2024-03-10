#include <stdio.h>
#include "main.h"
/**
 * print_diagsums -  prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: pointer to 2d array.
 * @size: size of the array.
 * Return: no return.
 */
void print_diagsums(int *a, int size)
{
	int i, sum_dig1 = 0, sum_dig2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_dig1 += a[(size * i) + i];
		sum_dig2 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%i, %i\n", sum_dig1, sum_dig2);
}

