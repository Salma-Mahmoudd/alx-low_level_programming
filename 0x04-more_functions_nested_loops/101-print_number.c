#include "main.h"

/**
 * print_number - prints an integer.
 *
 * Return: Always 0.
 */
void print_number(int n)
{
	int tmp, nth, size = 1, lD = n % 10;

	n /= 10;
	tmp = n;
	if (lD < 0)
	{
		lD *= -1, tmp *= -1, n *= -1;
		_putchar('-');
	}
	if (tmp > 0)
	{
		while (tmp / 10 != 0)
		{
			tmp /= 10, size *= 10;
		}
		while (size > 0)
		{
			nth = n / size;
			_putchar('0' + nth);
			n -= nth * size;
			size /= 10;
		}
	}
	_putchar('0' + lD);
}
