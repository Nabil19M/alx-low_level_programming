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
	int a;

	for (a = 0; a < 10; a++)
	{
	putchar((a >> 4) & 0xf);
	putchar((a & 0xf));
	}
	putchar('\n');
	return (0);
}
