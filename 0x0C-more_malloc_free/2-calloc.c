#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @c: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *c, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		c[i] = b;
	}

	return (c);
}

/**
 * *_calloc - allocates memory for an array
 * @m: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int m, unsigned int size)
{
	char *ptr;

	if (m == 0 || size == 0)
		return (0);

	ptr = malloc(size * m);

	if (ptr == 0)
		return (0);

	_memset(ptr, 0, m * size);

	return (ptr);
}
