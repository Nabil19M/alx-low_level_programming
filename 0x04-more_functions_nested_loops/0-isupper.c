#include "main.h"

/**
* _isupper - Shows 1 if the input is a
*
* upper character. Another cases, shows 0
*
* @c: The character in ASCII code
*
* Return: 1 for upper character. 0 for the rest.
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
