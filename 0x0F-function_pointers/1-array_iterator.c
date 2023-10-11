#include "funcrion_pointers.h"

/**
 * array_iterator - maps an array through a function pointer
 * @size: the size of array
 * @array: the int array
 * @action: pointer to the function you need to use
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int));
{
	int *end = &array + size - 1;
	
	if (array && size && action)
		while (array <= end)
			action(*array++);
}
