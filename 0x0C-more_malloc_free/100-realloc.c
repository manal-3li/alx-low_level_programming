#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @p: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @n_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *p, unsigned int old_size, unsigned int n_size)
{
	char *p1;
	char *old_ptr;
	unsigned int i;

	if (n_size == old_size)
		return (ptr);

	if (n_size == 0 && p)
	{
		free(p);
		return (0);
	}

	if (!p)
		return (malloc(n_size));

	p1 = malloc(n_size);
	if (!p1)
		return (0);

	old_ptr = ptr;

	if (n_size < old_size)
	{
		for (i = 0; i < n_size; i++)
			p1[i] = old_ptr[i];
	}

	if (n_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p1[i] = old_ptr[i];
	}

	free(p);
	return (p1);
}
