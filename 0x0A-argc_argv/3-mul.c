#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
<<<<<<< HEAD
	if (argc <= 2)
	{
	printf("Error\n");
	return (1);
	}
	else
	{
		
		printf("%d\n", argv[1] * argv[2]);
=======
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
>>>>>>> 78f325121234ccfb1bd7d42fe5ab46162988aa09
	return (0);
	}
}
