#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, j;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i += sqrt(size))
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value <= array[i] || i == size - 1)
		{
			size_t n = i - (size_t)sqrt(size);

			printf("Value found between indexes [%ld] and [%ld]\n", n, i);
			break;
		}
	}
	for (j = i - (size_t)sqrt(size); j <= i && j < size; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
