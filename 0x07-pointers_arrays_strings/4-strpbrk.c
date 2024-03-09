#include "main.h"
/**
* _strpbrk - searches a string for any of a set of bytes.
* @s: input string.
* @accept: characters should be located.
* Return: pointer to the byte in s that matches in accept, or NULL if not found
*/
char *_strpbrk(char *s, char *accept)
{
	int i = 0, len = 0, j, found = 0;

	while (*(accept + len))
		len++;
	while (*(s + i))
	{
		for (j = 0; j < len; j++)
			if (*(s + i) == *(accept + j) && !found)
			{
				found++;
				break;
			}
		if (found)
			break;
		i++;
	}
	if (!found)
		return (NULL);
	return (s + i);
}
