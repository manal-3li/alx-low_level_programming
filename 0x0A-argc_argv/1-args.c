#include <stdio.h>

/**
* main - program should print a number, followed by a new line
* @argc:number of command line
* @argv:pointer to an array of command line
* Return:0-success, non-zero-fail.
*/

int main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", argc - 1);
	return (0);
}
