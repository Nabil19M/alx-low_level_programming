#include "main.h"

/**
* print_most_numbers - prints numbers between 0 to 9.
*
* Do not print 2 and 4.
* Return: no return.
*/

void print_most_numbers(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		if (ch == '2' || ch == '4' )
		{
			continue;
		}
		_putchar(ch);
	}
	_putchar('\n');
}
