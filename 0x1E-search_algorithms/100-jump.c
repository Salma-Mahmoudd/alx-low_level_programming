#include "search_algos.h"
/**
 * jump_search - function that searches for a value
 * in an array of integers using the Linear search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: size of array.
 * @value: value to search for.
 * Return: index of value if exists or -1.
 **/
int jump_search(int *array, size_t size, int value)
{
	size_t end = 0, step = sqrt(size), i;

	if (!array)
		return (-1);
	while (value > array[end] && end < size)
	{
		printf("Value checked array[%ld] = [%d]\n", end, array[end]);
		end += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", end - step, end);

	for (i = end - step; i <= (int)fmin(end, size - 1); i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value ==  array[i])
			return (i);
	}
	return (-1);
}
