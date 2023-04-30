#include "main.h"
/**
 * _sqrt - calculate the natural square root of a number
 * @n: given integer number
 * @res: result of square root
 * Return: the result
 */
int _sqrt(int n, int res)
{
	if (res * res == n)
		return (res);
	else if (res == n / 2)
		return (-1);
	return (_sqrt(n, res + 1));
}
/**
 * _sqrt_recursion - calculate the natural square root of a number
 * @n: given integer number
 * Return: the result
 **/
int _sqrt_recursion(int n)
{
	int res = 1;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (_sqrt(n, res));
}
