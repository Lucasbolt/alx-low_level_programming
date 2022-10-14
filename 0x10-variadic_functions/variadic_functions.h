#ifndef VAR_H
#define VAR_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct args - a new struct type for printer.
 * @name: name representing types
 * @func: function to be called
 */
typedef struct args
{
	char *name;
	void (*func)(va_list a);
} arg_types;
#endif
