#include "function_pointers.h"
#include <stdio.h>

/**
*array_iterator - print elements of array
*@array: array
*@size: size of array
*@action: function pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL)
	{
		if (action != NULL && size > 0)
		{
			for (i = 0; i < size; i++)
			{
				action(array[i]);

			}
		}
	}
}
