#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @m: singly linked list.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *m)
{
	size_t nelem;

	nelem = 0;
	while (m != NULL)
	{
		if (m->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", m->len, m->str);
		m = m->next;
		nelem++;
	}
	return (nelem);
}
