#include <stdio.h>
#include <stdlib.h>
/**
 * main - minimum number of coins
 * @argc: number of command line arguments
 * @argv: one-dimensional array of strings
 * Return: 0
 **/
int main(int argc, char **argv)
{
	int coins = 0;
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents <= 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (cents >= 25)
		cents -= 25, coins++;
	while (cents >= 10 && cents < 25)
		cents -= 10, coins++;
	while (cents >= 5 && cents < 10)
		cents -= 5, coins++;
	while (cents >= 2 && cents < 5)
		cents -= 2, coins++;
	while (cents == 1)
		cents -= 1, coins++;
	printf("%d\n", coins);
	return (0);
}
