#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: 'simple program in c'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*
	 * this programe use printf to print to console
	 */
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("Size of long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of float: %zu byte(s)\n", sizeof(float));
	return (0);
}
