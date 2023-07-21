#include "main.h"
/**
*print_most_numbers - prints numbers except 2 and 4
*
*Return: returns nothing
*/

void print_most_numbers(void)
{
	char num;

	for (num = 48; num < 58; num++)
	{
		if ((num == 50) || (num == 52; num++))
			_putchar(num);
	}
	_putchar('\n');
}
