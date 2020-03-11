#include "3-calc.h"
#include <stdlib.h>


/**
*get_op_func - take the correct function to perform the operation askd by usr
*@s: string (operator)
*get_op_func: array of function pointer
*Return: integer
*/


int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}

	};

	i = 0;
	while (i < 5)
	{
		if (s[0] == ops[i].op[0])
			return (ops[i].f);

		i++;
	}
	return (NULL);
}
