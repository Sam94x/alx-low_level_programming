#include "main.h"
/**
*puts_half - puts half of a string
*@str: string
*Return:void
*/

void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 1)
	{
		j = (i - 1) / 2;
		j = j + 1;
	}
	else
	{
		j = i / 2;
	}

	for (i = j; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
