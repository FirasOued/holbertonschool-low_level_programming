#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
*print_numbers - function that prints numbers
*@separator: string to be printed between strings
*@n: number of strings passed to the function
*/

void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	char *str;

	va_list valist;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char*);
		if (!str)
			printf("(nil)");

		else
			printf("%s", str);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
