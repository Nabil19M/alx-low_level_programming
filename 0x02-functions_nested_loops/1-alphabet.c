#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'simple program in c'
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
void print_alphabet(void)
{
	int a = 97;
	int z = 122;

	for (; a <= z; a++)
	_putchar(a);
	_putchar('\n');
}
