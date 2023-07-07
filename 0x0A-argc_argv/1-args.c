#include <stdio.h>

/**
* main - program should print a number, followed by a new line
* @argc:int
* @argv:pointer
* Return:0
*/

int main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", argc - 1);
	return (0);
}
