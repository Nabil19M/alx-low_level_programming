#include "main.h"
/**
 * _memset - fills memory with constants bytes.
 * @s: input string.
 * @b: input character.
 * @n:input unsigned number.
 * Return: return pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
