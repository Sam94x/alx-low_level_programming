#include <stdlib.h>
#include "main.h"

/**
* array_range - creates an array of integers
* @min: smallest number in the array
* @max: lagrest value in the array
*
* Return: pointer to the address of the memory block
*/

int *array_range(int min, int max)
{
	int *b;
	int i;

	if (min > max)
		return (NULL);

	b = malloc(sizeof(*b) * ((max - min) + 1));

	if (b == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		b[i] = min++;

	return (b);
}
