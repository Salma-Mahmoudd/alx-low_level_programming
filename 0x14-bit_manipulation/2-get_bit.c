#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: integer number
 * @index: bit to be printed
 * Return: value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	if (((n >> index) & 1) == 1)
		return (1);
	else
		return (0);
}
