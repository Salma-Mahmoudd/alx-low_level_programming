#include "main.h"

/**
 * print_rev - toma la cadena de la funcion.
 * @s: value taken from main
 * Return: (0)
 */
void print_rev(char *s)
{
	char i = 0;

	while (*(s + i) != '\0')
		i++;
	while (i - 1 != 0)
	{
		_putchar(*s);
		i--;
	}
}
