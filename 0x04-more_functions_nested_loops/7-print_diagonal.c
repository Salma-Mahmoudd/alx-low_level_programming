#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *@n: integer number of times the character \ should be printed
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 0; j < i - 1; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	_putchar('\n');
}
