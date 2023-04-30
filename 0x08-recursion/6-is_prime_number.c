#include "main.h"
/**
 * _prime_number - find if given number is prime number
 * @n: given number
 * @test: test the mod operation
 * Return: 1 or 0.
 */
int _prime_number(int n, int test)
{
	int count = 0;

	if (test != 0)
	{
		if (n % test == 0)
			count = 1 + _prime_number(n, test - 1);
		else
			count = _prime_number(n, test - 1);
	}
	return (count);
}
/**
 * is_prime_number - find if given number is prime number
 * @n: given number
 * Return: 1 if the input integer is a prime number,
 * otherwise return 0.
 */
int is_prime_number(int n)
{
	int count = 0, test = n;

	if (n < 0)
		return (0);
	count = _prime_number(n, test);
	if (count != 2 || n == 0)
		return (0);
	else
		return (1);
}
