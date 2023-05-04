#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 * Return: equivalent integer number or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 1, dec = 0;
	int len;

	if (!b)
		return (0);
	len = strlen(b) - 1;
	while (len != -1)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		dec += (b[len--] - '0') * i;
		i *= 2;
	}
	return (dec);
}
