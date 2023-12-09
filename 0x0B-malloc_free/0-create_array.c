#include <stdlib.h>
#include "main.h"
/*
 * create_array - creates an array of chars, 
 * and initializes it with a specific char.
 * @size : 
 * @c :
 * Return : Null if size zero.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	arr = malloc(sizeof(char) * size);
	if (arr == NULL || size == 0)
		return NULL;
	for (i = 0; i < size ; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
