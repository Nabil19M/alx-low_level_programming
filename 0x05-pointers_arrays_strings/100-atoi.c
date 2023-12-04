#include "main.h"
#include <limits.h>
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
				if (sign == 1)
				{
					if(result > INT_MAX / 10 || (sign == -1 && result < INT_MIN / 10))
					{
					if (sign == -1 && result == INT_MIN / 10)
					{
						if ((*(s + index) - '0') > INT_MIN % 10)
						return (INT_MIN);
					}
					else
						return (0);
					}
				}
				result = result * 10 + (*(s + index) - '0');
				index++;
			}
			break;
		}
		index++;
	}
	return ((unsigned)result * sign);

}
