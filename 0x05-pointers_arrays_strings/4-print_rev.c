#include "main.h"

/**
* print_rev - prints a string reversily, followed by a new line.
* @s: input string.
* Return: no return.
*/

void print_rev(char *s)
{
	int size = 0;

	while (*(size + s) != '\0')
	{
		size++;
	}
	while (size--)
	{
		_putchar(s[size]);
	}
	_putchar('\n');
}
