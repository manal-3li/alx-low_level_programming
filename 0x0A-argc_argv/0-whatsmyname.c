#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int ac __attribute__((unused)), char *av[])
{
	printf("%s\n", *av);
	return (0);
}
