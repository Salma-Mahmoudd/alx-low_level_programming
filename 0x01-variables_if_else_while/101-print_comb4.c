#include <stdio.h>
/**
* main - Print combinations of two digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	int j;
	int n;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (n = 0; n < 10; n++)
			{
				if (i != j && i != n && j > i && n > j)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + n);
					if (i != 7 || j != 8 || n != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
