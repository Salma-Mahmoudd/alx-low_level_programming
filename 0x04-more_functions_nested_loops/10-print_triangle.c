#include "main.h"

/**
 * print_triangle - prints a triangle(#)
 *@size: the size of the triangle
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 1)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j >= size - 1 - i)
					_putchar(35);
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
