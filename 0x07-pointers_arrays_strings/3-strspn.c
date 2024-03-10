#include "main.h"
/**
* _strspn - gets the length of a prefix substring.
* @s: input string.
* @accept: characters should be located.
* Return: the bytes in the initial segment of s which consist from accept.
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, len = 0, j, counter = 0, flag = {0};

	while (*(accept + len))
		len++;
	while (*(s + i))
	{
		flag = 0;
		for (j = 0; j < len; j++)
			if (*(s + i) == *(accept + j))
			{
				flag++;
				counter++;
				break;
			}
		if (!flag)
			return (counter);
		i++;
	}
	return (0);
}
