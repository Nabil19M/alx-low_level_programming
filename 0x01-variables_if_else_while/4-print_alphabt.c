#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: 'simple program in c'
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int a = 97;
	int z = 122;

	for (; a <= z; a++)
	{
	if (a == 113 || a == 101)
	{
		continue;
	}
	else
	{
		putchar(a);
	}
	}
	putchar('\n');
	return (0);
}
