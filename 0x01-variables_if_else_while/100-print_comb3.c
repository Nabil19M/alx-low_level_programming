#include <stdio.h>
/**
 *  main - Prints numbers between 00 to 99.
 *  Return: Always 0 (Success)
 */
int main(void)
{
<<<<<<< HEAD
	int arr[] = {01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89};
	int s;

	for (s = 0; s <= sizeof(arr); s++)
	putchar(arr[s]);
	putchar('\n');
=======
	int dan;
	int n;

	for (dan = 48; dan <= 57; dan++)
	{
		for (n = 49; n <= 57; n++)
		{
			if (n > dan)
			{
				putchar(dan);
				putchar(n);
				if (dan != 56 || n != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10); /* this is an ascii code for new line*/

>>>>>>> 5a33e72659b8dbd8c761bec76609555ff632bf32
	return (0);
}
