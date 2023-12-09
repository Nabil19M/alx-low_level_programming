#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Returns a pointer to a newly allocated space in memory.
 * @str: The string to duplicate.
 * Return: A pointer to a duplication of str if everthing runs well.
 *	   NULL if str = NULL
 *
 * Description: Returns a pointer to a newly allocated space in
 *	        memory, which contains a copy of the string given
 *		as parameter.
 */
char *_strdup(char *str)
{
	char *newstr;
	int i;
	int size = 0;

	while (str[size] != '\0')
		size++;
	newstr = malloc(size * sizeof(char));
	if (newstr != NULL)
	{
		for(i = 0; i < size; i++)
			newstr[i] = str[i];
		return (newstr);
	}

}
