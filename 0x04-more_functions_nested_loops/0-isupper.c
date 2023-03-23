#include "main.h"
#include <stdio.h>

/**
* _isupper - checks for uppercase character
* @c: Variable text
* Return: Always 0.
*/

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
