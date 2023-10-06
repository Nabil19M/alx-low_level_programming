#include "main.h"
/**
 * _strlen - calculate the lenght of string.
 * @s: input integer.
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int l = 0, i = 0;

	while (*(s + i) != '\0')
	{
		l++;
		i++;
	}
	return (l);
}
