#include "main.h"
/**
 * flip_bits - flip to get from one number to another.
 * @n: old integer number
 * @m: new integer number
 * Return: number of bits have been flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 1, j = n | m;
	unsigned int count = 0;

	while (j > 1)
		i = i << 1, j = j >> 1;
	while (i != 0)
	{
		if (!((i & n) == (i & m)))
			count++;
		i = i >> 1;
	}
	return (count);
}
