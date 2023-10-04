#include "main.h"

/**
* _isdigit - Shows 1 if the input is a
*
* digit character. Another cases, shows 0
*
* @c: The character in ASCII code
*
* Return: 1 for digit. 0 for the rest.
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
