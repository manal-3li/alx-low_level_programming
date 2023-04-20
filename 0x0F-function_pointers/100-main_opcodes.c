#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int ac, char *av[])
{
	int bytes, i;
	char *arr;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(av[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}
