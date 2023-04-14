#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed to the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int ac, char *av[])
{
	(void) av; /*Ignore av*/
		printf("%d\n", ac - 1);

		return (0);
}
