#include "main.h"
/**
* _strspn - gets the length of a prefix substring.
* @s: input string.
* @accept: characters should be located.
* Return: the bytes in the initial segment of s which consist from accept.
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, len = 0, j, counter = 0, freq[100] = {0};

	while (*(accept + len))
		len++;
	while (*(s + i))
	{
		for (j = 0; j < len; j++)
			if (*(s + i) == *(accept + j) && freq[j] == 0)
			{
				freq[j]++;
				counter++;
				break;
			}
		if (counter == len)
			return (i + 1);
		i++;
	}
	return (0);
}
