#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - prints strings
*
* @separator: the separator
* @n: number of strings to be passed
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == 0)
		{
		printf("nil");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
