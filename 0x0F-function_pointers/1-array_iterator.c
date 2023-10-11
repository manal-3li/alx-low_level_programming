#include "function_pointers.h"

/**
 * array_iterator - maps array through function pointers
 * @array: array to iterate
 * @size: size of array
 * @action: pointer to function to call
 *
 * Return: empty if @array and @action is NULL
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array != NULL && size > 0 && action != NULL)
		for (index = 0; index < size; index++)
			action(array[index]);
}
