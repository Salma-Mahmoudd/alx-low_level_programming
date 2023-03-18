#include <stdio.h>
/**
* main - Print combinations of two digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = 0;
	int j;
	int n;
	int m;

	for (j = 0; j < 10; j++)
	{
		for (n = 0; n < 10; n++)
		{
			for (m = 0; m < 10; m++)
			{
				if ((m < j && n > i) || (m > j && n >= i) || (m == j && n > i))
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + n);
					putchar('0' + m);
					if (i != 9 || j != 8 || n != 9 || m != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
		if (i < 9 && j == 9)
		{
			j = 0;
			i++;
		}
	}
	putchar('\n');
	return (0);
}
