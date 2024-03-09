#include "main.h"
/**
 * _strstr - that locates a substring>
 * @haystack: input string.
 * @needle: characters should be located.
 * Return: pointer to the beginning of located substring, or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, len = 0, j, found = 0;

	while (*(needle + len))
		len++;
	while (*(haystack + i))
	{
		found = 0;
		for (j = 0; j < len; j++)
			if (*(haystack + i + j) == *(needle + j))
			{
				found++;
				continue;
			}
		else
			break;
		if (found == len)
			return (haystack + i);
		i++;
	}
	if (found != len)
		return (NULL);
}
