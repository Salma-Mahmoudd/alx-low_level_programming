#include "main.h"

/**
* int _isupper - a function that checks
* for uppercase character
*
* @c: The character in ASCII code.
*
* Return: 1 for uppercase or 0 otherwise.
*/
int _isupper(int c)
{
	if (c <=90 && c >=65)
	{
		return (1);
	}
	else
		return (0);
}
