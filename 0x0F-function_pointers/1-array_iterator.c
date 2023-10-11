#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes as given parameter
 * @array: array of data
 * @size: size of array
 * @action: function pointer
 *Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;
	if (array[size] != 0 && action != 0)
	{
	 	for (i=0; i<size; i++)
		{
			action(array[i]);
		}
	}
}
