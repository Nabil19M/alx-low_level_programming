#include <stdlib.h>
#include <time.h>
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
	int n;
	int ls;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ls = n % 10;
	if (ls > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ls);
	}
	else if (ls == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ls);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ls);
	}
	return (0);
}
