#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - selects the correct function.
 * @s: The operator saved as string.
 * Return: pointer to the correct function.
 **/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && s != NULL && *s != *(ops[i].op))
		i++;
	if (ops[i].op != NULL && s != NULL)
		return (ops[i].f);
	return (NULL);
}
