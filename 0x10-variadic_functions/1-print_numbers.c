#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
*print_numbers - function that prints numbers
*@separator: string to be printed between numbers
*@n: number of integers passed to the function
*/



void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list a_list;


	va_start(a_list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(a_list, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);

	}
	printf("\n");
	va_end(a_list);
}
