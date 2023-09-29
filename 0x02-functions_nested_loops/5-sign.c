#include "main.h"

/**
* print_sign - Returns 1 and prints + if n is greater than zero,
*
* @n: The number in ASCII code
*
* Return: 1 for number greater than zero.
* 0 for number = zero. -1 for n less than zero.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
