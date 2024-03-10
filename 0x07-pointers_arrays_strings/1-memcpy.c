#include "main.h"
/**
* _memcpy - compies memory area.
* @dest: destination.
* @src: source.
* @n: amount of bytes from src.
* Return: return a pointer to dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
