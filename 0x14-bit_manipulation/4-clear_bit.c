#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer of integer number
 * @index: bit to be changed
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63 || !n)
		return (-1);
	*n = ~(1 << index) & *n;
	return (1);
}
