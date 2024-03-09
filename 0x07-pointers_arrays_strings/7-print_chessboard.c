#include "main.h"
/**
 * print_chessboard - that prints the chessboard
 * @a: pointer to 2d array.
 * Return: no return.
 */
void print_chessboard(char (*a)[8])
{
	int j, i;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(*(*(a + i) + j));
		}
		_putchar('\n');
	}
}
