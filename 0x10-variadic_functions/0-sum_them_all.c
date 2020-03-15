#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
*sum_them_all - function that return the sum of all its parameters
*@n: number of function's argument
*@...: last parameter as ellipsis
*Return: sum , 0 if fail.
*/



int sum_them_all(const unsigned int n, ...)
{
	va_list a_list;
	unsigned int i, sum = 0;


	if (n == 0)
		return (0);

	va_start(a_list, n);
	for (i = 0; i < n; i++)
		sum += va_arg(a_list, int);

	va_end(a_list);
	return (sum);
}
