#include "funcrion_pointers.h"

/**
 * int_index - search for interger
 * @size: num of element in array
 * @cmp: pointer of fun to compare values
 * @array: the int array
 *
 * Return: the interger index.
 */
int int_index(int *array, int size, int (*cmp)(int));
{
	int i = 0;
	
	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array{i}))
				return (i);
			i++;
		}
	return (-1);
}
