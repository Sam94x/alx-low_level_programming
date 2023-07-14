#include <stdio.h>
/**
*main - Prints all combinations of two two digits
*Return: returns 0
*/
int main(void)
{
	int d1, d2;

	for (d1 = 0; d1 <= 98; d1++)
	{
		for (d2 = d1 + 1; d2 <= 99; d2++)
		{
			putchar((d1 / 10) + '0');
			putchar((d1 % 10) + '0');
			putchar(32);
			putchar((d2 / 10) + '0');
			putchar((d2 % 10) + '0');

			if (d1 / 10 != 9 || d1 % 10 != 8)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}

