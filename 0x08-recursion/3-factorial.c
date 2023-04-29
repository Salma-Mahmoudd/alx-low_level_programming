#include "main.h"
/**
 * factorial - calculate the factorial of a given number.
 * @n: given integer number
 * Return: the result
 **/
int factorial(int n)
{
	int fac = 1;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	fac = n * factorial(n - 1);
	return (fac);
}
