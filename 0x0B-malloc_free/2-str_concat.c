#include <stdlib.h>
#include "main.h"
/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: A pointer to a newly allocated space in memory
 *	   which contains the containts of s1 followed by
 *	   the containts of s2.
 *	   NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0;
	char *s3 = NULL;
	int i, j;

	while (s1[size1] != NULL)
		size1++;
	while (s2[size2] != NULL)
		size2++;
	s3 = malloc(sizeof(char) * (size1 + size2 + 1));
	if (s3 != NULL)
	{
		for (i = 0; i < size1; i++)
			s3[i] = s1[i];
		for (j = 0; j < size2; j++)
			s3[i + j] = s2[j];
	}
	return (s3);
}
