#include "main.h"
/**
 * main - Entry point
 *
 *  print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
/*
*  print_alphabet - Prints the alphabet in lowercase.
*/
void print_alphabet(void)
{
	int a = 97;
	int z = 122;

	for (; a <= z; a++)
	_putchar(a);
	_putchar('\n');
}
