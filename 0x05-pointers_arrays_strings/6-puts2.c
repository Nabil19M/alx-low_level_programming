#include "main.h"
/**
 * puts2 - prints every character in string, followed by new line.
 * @str : input string.
 * Return : return void.
 */
void puts2(char *str)
{
	int count = 0;
	
	while (count % 2 == 0 && str[count] == '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
