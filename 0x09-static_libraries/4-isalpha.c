#include "main.h"
/**
* _isalpha - Shows 1 if the input is c
* letter Another cases, shows 0
*
* @c: The character in ASCII code
*
* Return: 1 for letters. Returns 0 otherwise
*/
int _isalpha(int c)
{
	if ((c > 96 && c < 124) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
