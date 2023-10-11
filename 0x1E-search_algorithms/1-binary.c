#include "search_algos.h"
/**
 * binary_search - function that searches for a value
 * in an array of integers using the Linear search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: size of array.
 * @value: value to search for.
 * Return: index of value if exists or -1.
 **/
int binary_search(int *array, size_t size, int value)
{
	size_t low = array[0], high = array[size - 1], mid, i;

	if (!array)
		return (-1);
	while (low <= high)
	{

		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		else if (value > array[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
