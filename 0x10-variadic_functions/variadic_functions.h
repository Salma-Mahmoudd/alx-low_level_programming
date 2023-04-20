#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct format - Struct format
 * @form: The operator
 */
typedef struct format
{
	char *form;
} type;

#endif
