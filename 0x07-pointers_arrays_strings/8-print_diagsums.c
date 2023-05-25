#include "main.h"
/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: the matrix of integers.
 * @size: size of matrix.
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, tmp = 0, tmp1 = 0;

	while (i < size)
	{
		tmp += *(a + i * size + j);
		tmp1 += *(a + i * size + (size - 1 - j));
		i++, j++;
	}
	printf("%d, %d\n", tmp, tmp1);
}
