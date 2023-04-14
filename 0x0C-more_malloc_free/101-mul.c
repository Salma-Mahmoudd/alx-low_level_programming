#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - multiplies two positive numbers
 * @argc: number of command line arguments
 * @argv: one-dimensional array of strings
 * Return: 0
 **/
int main(int argc, char **argv)
{
	int i, j = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 0; i < argc; i++)
	{
		while (argv[i][j] != '\0')
			j++;
		if (!(isdigit(argv[i][j])))
		{
			printf("Error\n");
			exit(98);
		}
		j = 0;
	}
	return (0);
}
