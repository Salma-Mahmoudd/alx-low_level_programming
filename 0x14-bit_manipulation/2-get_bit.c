#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: integer number
 * @index: bit to be printed
 * Return: value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1, j = n;

	while ((index--) != 0)
	{
		i = i << 1;
		j = j >> 1;
		if (j == 0 && index != 0)
			return (-1);
	}
	if ((i & n) == i)
		return(1);
	else
		return(0);
}
