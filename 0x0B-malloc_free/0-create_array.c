#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and initializes
 *  it with a specific char.
 *  @c: char to initialize
 *  @size: number of bytes to allocate
 *
 *  Return: a pointer to the array or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char * m = malloc(size);

	if (size == 0 || m == 0)
		return (NULL);
	while (size--)
		m[size] = c;
	return (m);
}
