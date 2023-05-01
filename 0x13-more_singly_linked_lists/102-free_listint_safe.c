#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: A pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *next = NULL;
	size_t count = 0;

	while (current != NULL)
	{
		count++;

		/* Check if we've visited this node before */
		if (current->next < current)
		{
			*h = NULL;
			free(current);
			fprintf(stderr, "Error: linked list is a loop\n");
			exit(98);
		}

		next = current->next;
		free(current);
		current = next;

		if (current == *h)
		{
			*h = NULL;
			break;
		}
	}

	return (count);
}
