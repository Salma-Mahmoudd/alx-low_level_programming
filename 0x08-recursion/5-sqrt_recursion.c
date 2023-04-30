#include "main.h"
/**
 * _sqrt_recursion - calculate the natural square root of a number
 * @n: given integer number
 * Return: the result
 **/
int _sqrt_recursion(int n)
{
	int res = 0;

	if (n < 0)
		return (-1);
	return (_sqrt(n, res));
}
