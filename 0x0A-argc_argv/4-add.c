#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digit
 * @st: array str
 *
 * Return: Always 0 (Success)
 */
int check_num(char *st)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(st)) /*count string*/
	{
		if (!isdigit(st[count])) /*check if st there are digit*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @ac: Count arguments
 * @av: Arguments
 *
 * Return: Always 0 (Success)
 */
int main(int ac, char *av[])
{
	/*Declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < ac) /*Goes through the whole array*/
	{
	if (check_num(av[count]))
	{
	str_to_int = atoi(av[count]); /*ATOI --> convert string to int*/
	sum += str_to_int;
	}
	/*Condition if one of the number contains symbols that are not digits*/
		else
		{
		printf("Error\n");
		return (1);
		}
		count++;
	}
	printf("%d\n", sum); /*print sum*/
	return (0);
}
