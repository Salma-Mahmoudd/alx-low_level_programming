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
	else
	{
		cents = atoi(argv[1]);
		if (cents <= 0)
			printf("%d\n", 0);
		else
		{
			if (cents >= 25)
			{
				coins += (cents / 25);
				cents -= 25 * coins;
				while (cents != 0)
				{
					if (cents >= 10)
					{
						cents -= 10;
						coins++;
					}
					else if (cents >= 5 && cents < 10)
					{
						cents -= 5;
						coins++;
					}
					else if (cents >= 2 && cents < 5)
					{
						cents -= 2;
						coins++;
					}
					else
					{
						cents -= 1;
						coins++;
					}
				}
			}
			else if (cents >= 10 && cents < 25)
			{
				coins += (cents / 10);
				while (cents != 0)
				{
					if (cents >= 5)
					{
						cents -= 5;
						coins++;
					}
					else if (cents >= 2 && cents < 5)
					{
						cents -= 2;
						coins++;
					}
					else
					{
						cents -= 1;
						coins++;
					}
				}
			}
			else
			{
				while (cents != 0)
				{
					if (cents >= 5 && cents < 10)
					{
						coins++;
						cents -= 5;
					}
					else if (cents >= 2 && cents < 5)
					{
						cents -= 2;
						coins++;
					}
					else
					{
						coins++;
						cents -= 1;
					}
				}
			}
			printf("%d\n", coins);
		}
	}
	return (0);
}
