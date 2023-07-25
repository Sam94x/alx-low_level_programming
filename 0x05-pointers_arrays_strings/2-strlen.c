#include "main.h"
/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns lenght;
 */
int _strlen(char *s)
{
	int count, i;

	i = 0;

	for (count = 0; s[count] != '\0'; count++)
		i++;

	return (i);
}
