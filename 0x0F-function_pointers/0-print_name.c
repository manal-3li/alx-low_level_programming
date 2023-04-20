#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name using pointer to function
 * @name: string to add
 * @m: pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*m)(char *))
{
	if (name == NULL || m == NULL)
		return;

	m(name);
}
