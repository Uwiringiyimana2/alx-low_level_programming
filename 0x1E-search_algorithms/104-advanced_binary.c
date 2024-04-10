#include "search_algos.h"

/**
 * advanced_binary - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: index where value is located else -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_search_a(array, 0, size - 1, value));
}

/**
 * binary_search_a - binary search
 * @array: pointer to the first element of the array to search in
 * @value: the value to search for
 * @start: starting index
 * @end: ending index
 * Return: index where value is located else -1
 */
int binary_search_a(int *array, size_t start, size_t end, int value)
{
	size_t i;

	if (start <= end)
	{
		size_t mid = start + (end - start) / 2;

		printf("Searching in array: ");
		for (i = start; i <= end; i++)
			printf("%d%s", array[i], (i == end) ? "\n" : ", ");

		if (array[mid] == value)
		{
			if (mid == start || array[mid - 1] != value)
				return (mid);
			else
				return (binary_search_a(array, start, mid - 1, value));
		}
		if (array[mid] < value)
			return (binary_search_a(array, mid + 1, end, value));
		if (array[mid] > value)
			return (binary_search_a(array, start, mid - 1, value));
	}
	return (-1);
}
