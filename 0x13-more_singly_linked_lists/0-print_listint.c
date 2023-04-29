#include "lists.h"

/**
*print_listint - prints all the elements of a list.
*@h: head of a list.
*
*Return: Number of nodes in the list.
*/
size_t print_listint(const listint_t *h)
{
size_t nnodes = 0;
const listint_t *current_node = h;

while (current_node != NULL)
{
printf("%d\n", current_node->n);
current_node = current_node->next;
nnodes++;
}
return (nnodes);
}
