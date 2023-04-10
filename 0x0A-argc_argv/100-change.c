#include <stdio.h>
/
 * main - minimum number of coins
 * @argc: number of command line arguments
 * @argv: one-dimensional array of strings
 * Return: 0
 /
int main(int argc, char **argv)
{
	int coins = 0;
	int cents = atoi(argv[1]);

	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (cents < 0)
			printf("%d\n", 0);
		else
		{
			if (cents > 25)
			{
				while (!(cents % 25))
				{
					if (cents % 10)
					{
						cents -= 10;
						coins++;
					}
					else
					{
						cents -= 1;
						coins++;
					}
				}
				coins += (cents / 25);
			}
			else if (cents > 10 && cents < 25)
			{
				while (!(cents % 10))
				{
					cents -= 1;
					coins++;
				}
				coins += (cents / 10);
			}
			else
			{
				while (cents != 0)
				{
					coins++;
					cents -= 1;
				}
			}
			printf("%d\n", coins);
		}
	}
	return (0);
}
