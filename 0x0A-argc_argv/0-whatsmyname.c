include <stdio.h>

/**
* main - program to prints its name, followed by a new line
* @argc: int
* @argv: list
* Return: 0
*/

int main(int argc, char const *argv[])
{
	printf("%s\n", argv[argc - 1]);
	(void)argc;
	return (0);
}
