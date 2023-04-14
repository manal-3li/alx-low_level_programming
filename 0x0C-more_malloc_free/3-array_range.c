#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @mini: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int mini, int max)
{
	int *ptr;
	int i, size;

	if (mini > max)
		return (0);

	size = max - mini + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == 0)
		return (0);

	for (i = 0; mini <= max; i++)
		ptr[i] = mini++;

	return (ptr);
}
