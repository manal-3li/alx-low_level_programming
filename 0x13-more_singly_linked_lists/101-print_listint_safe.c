#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current = head;
const listint_t *prev = NULL;
size_t count = 0;

while (current != NULL)
{
printf("[%p] %d\n", (void *)current, current->n);
count++;

/* Check if we've visited this node before */
if (current < prev)
{
fprintf(stderr, "Error: linked list is a loop\n");
exit(98);
}

prev = current;
current = current->next;
}

return (count);
}
