#include "main.h"
/**
 * puts2 - prints every character in string, followed by new line.
 * @str : input string.
 * Return : return void.
 */
void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count += 2;
	}
}

