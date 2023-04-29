#include "main.h"
/**
 * _pow_recursion - calculate the power.
 * @x: given integer number
 * @y: value of power
 * Return: the result
 **/
int _pow_recursion(int x, int y)
{
	int res;

	if (y < 0)
		return (-1);
	if (y != 0)
	{
		res = x * _pow_recursion(x, y - 1);
		return (res);
	}
	return (1);
}
