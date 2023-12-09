#include <stdlib.h>
#include "main.h"
/**
 * create_array - Creates an array of chars.
 * @size: The size of array.
 * @c: The char to initialize array with.
 * Return: A pointer to the array if everything works well.
 *	   NULL otherwise.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);
	if (arr == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size ; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
