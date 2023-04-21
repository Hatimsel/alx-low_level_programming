#include "variadic_functions.h"

/**
* print_c - Prints a char variable
*
* @arg: The argument to print
*/

void print_c(va_list arg)
{
	char c;

	c = va_arg(arg, int);

	printf("%c", c);
}

/**
* print_i - Prints an int
*
* @arg: Argument to print
*/

void print_i(va_list arg)
{
	int i;

	i = va_arg(arg, int);

	printf("%d", i);
}

/**
* print_f - Prints a float variable
*
* @arg: The argument to print
*/
void print_f(va_list arg)
{
	float f;

	f = va_arg(arg, double);

	printf("%f", f);
}

/**
* print_s - Prints a string variable
*
* @arg: The argument to print
*/

void print_s(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
* print_all - Prints all variables followed by a new line
*
* @format : Arguments passed to the function
*/

void print_all(const char * const format, ...)
{
	va_list args;
	int n;
	int m;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s}
	};

	va_start(args, format);

	while (format && (*(format + n)))
	{
		m = 0;

		while (m < 4 && (*(format + n) != *(funcs[m].symbol)))
			m++;

		if (m < 4)
		{
			printf("%s", separator);
			funcs[m].print(args);
			separator = ", ";
		}
		n++;
	}
	printf("\n");
	va_end(args);
}
