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
	int A = 65;
	int Z = 90;

	for (; a <= z; a++)
	putchar(a);
	for (; A <= Z; A++)
	putchar(A);
	putchar('\n');
	return (0);
}
