#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Prints the result
 * @argc: number of command line arguments
 * @argv: one-dimensional array of strings
 * Return: 0
 **/
int main(int argc, char **argv)
{
	int a = atoi(argv[1]), b = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2] == "/" || argv[2] == "%") && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(a, b));
	return (0);
}
