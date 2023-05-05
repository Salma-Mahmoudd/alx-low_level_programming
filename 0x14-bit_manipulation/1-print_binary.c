#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: integer number
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 1, j = n;

	while (j > 1)
		i = i << 1, j = j >> 1;
	while (i != 0)
	{
		if ((i & n) == i)
			_putchar('1');
		else
			_putchar('0');
		i = i >> 1;
	}
}
