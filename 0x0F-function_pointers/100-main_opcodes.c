#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function.
 * @argc: number of command line arguments
 * @argv: one-dimensional array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < atoi(argv[1]); i++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (i == atoi(argv[1]) - 1)
			continue;
		printf(" ");
		address++;
	}
	printf("\n");
	return (0);
}
