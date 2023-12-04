#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0, index = 0;

	while (*(s + index) != '\0')
	{
		if (*(s + index) == '-')
		{
			sign *= -1;
		}
		if (*(s + index) >= '0' && *(s + index) <= '9')
		{
			while (*(s + index) >= '0' && *(s + index) <= '9')
			{
				result = result * 10 + (*(s + index) - '0');
				index++;
			}
			break;
		}
		index++;
	}
	return (result * sig)n;

}
