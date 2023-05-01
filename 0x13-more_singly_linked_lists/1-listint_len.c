#include "lists.h"

/**
 * listint_len - returns the number of elements in
 * a linked list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);

	size_t nnodes = 1;
	const listint_t *current = h;

	while (current->next != NULL)
	{
		current = current->next;
		nnodes++;
	}

	return (nnodes);
}
