#include <stdio.h>
/**
 * main -  prints the result of the multiplication.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int i;

  if (argc <= 2)
  {
    printf("Error\n");
    return (1);
  }
		printf("%d\n", argv[1]*argv[2]);
	return (0);
}
