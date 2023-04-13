#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range - creates an array of integers.
 * @min: minimum int in array
 * @max: maximum int in array
 * Return: a pointer, or NULL if it fails.
 **/
int *array_range(int min, int max)
{
	int *a, i;

	if (min > max)
		return (NULL);
	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		a[i - min] = i;
	return (a);
}
