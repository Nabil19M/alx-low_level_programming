#include "main.h"
/**
 * _strlen - calculate the lenght of string.
 * @s: input integer.
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}
