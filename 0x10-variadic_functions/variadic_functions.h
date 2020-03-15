#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H


/**
*struct variadicType - define data structure
*@valid: a pointer to character
*@f: a function pointer to function
 */

typedef struct typelist
{
	char *type;
	void (*f)();

} arg_type;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC8FUNCTIPN */
