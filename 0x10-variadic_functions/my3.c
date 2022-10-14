#include "variadic_functions.h"
#include <string.h>
#include <stdio.h>

void print_int(va_list args);
void print_string(va_list args);
void print_char(va_list args);
void print_float(va_list args);
void print_all(const char * const format, ...);


/**
 * print_string - print_strings
 * @args: arg to print
 */
void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 * print_char - prints char
 * @args: args to print
 */
void print_char(va_list args)
{
	char s;

	s = va_arg(args, int);

	printf("%c", s);
}

/**
 * print_float - prints floats
 * @args: args to print
 */
void print_float(va_list args)
{
	float a;

	a = va_arg(args, double);

	printf("%f", a);
}

/**
 * print_int - prints integers
 * @args: args to print
 */
void print_int(va_list args)
{
	int a;

	a = va_arg(args, int);

	printf("%d", a);
}
/**
 * print_all - print variable num of args of differnet types
 * @format: formats of args
 */
void print_all(const char * const format, ...)
{

	size_t size = strlen(format);
	unsigned int i = 0, u = 0;
	va_list ap;

	arg_types table[] = {
		{"s", print_string},
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"n", NULL}
	};

	va_start(ap, format);

	while (i < size)
	{
		u = 0;

		while (format[i] != *(table[u].name) && *(table[u].name) != 'n')
			u++;

		if (table[u].name != "n")
		{
			table[u].func(ap);

			if (i < size - 1)
				printf(", ");
		}
		i++;

	}
	putchar('\n');
	va_end(ap);
}
