#include <stdio.h>

/**
* main - program to prints its name, followed by a new line
* @argc: int
* @argv: char
* Return: 0
*/

int main(int argc, char **argv)
{	
	(void)argc;
	printf("%s\n", argv[argc - 1]);
	return (0);
}
