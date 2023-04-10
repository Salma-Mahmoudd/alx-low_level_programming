#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc: number of command line arguments
 * @argv: one-dimensional array of strings
 * Return: 0
 **/
int main(int argc, char **argv)
{
	int i, j = 0;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) >= 0)
		{
			while (j < strlen(argv[i]))
			{
				if (isdigit(argv[i][j]))
				{
					j++;
					continue;
				}

				else
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
