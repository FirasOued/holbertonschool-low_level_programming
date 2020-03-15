#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/*
*_char - print characters
*@c: character
*/
void _char(va_list c)
{
	printf("%c", va_arg(c, int));
}


/**
*_int - prints integers
*@i: integer
*/

void _int(va_list i)
{
	printf("%d", va_arg(i, int));
}


/**
*_float - print floats
*@f: float
*/

void _float(va_list f)
{
	printf("%f", va_arg(f, double));
}


/**
*_string - print strings
*@s: string
*/

void _string(va_list s)
{
	char *string;


	string = va_arg(s, char *);

	if (string == NULL)
		string = "(nil)";

	printf("%s", string);
}


/**
*print_all - prints any argument passed into it
*@format: formats symbols in order
*Return: void
*/

void print_all(const char * const format, ...)
{

	unsigned int i = 0, j = 0;
	char *sep;

	va_list a_listprint;

	arg_type typelist[] = {
		{"c", _char},
		{"i", _int},
		{"f", _float},
		{"s", _string}

	};

	va_start(a_listprint, format);

	while (format && format[i])
	{
		while (j < 4)
		{
			if (format[i] == typelist[j].type[0])
			{
				printf("%s", sep);
				(*typelist[j].f)(a_listprint);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
}
