#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index: returns the index of the first element for which the cmp function does not return 0
 * @array: array to search through
 * @size: size of array
 * @cmp: pointer to the function
 * Rturn: first index; -1 no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != 0 && size > 0 && cmp != 0)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	else
		return (-1);
	return (-1);
}


