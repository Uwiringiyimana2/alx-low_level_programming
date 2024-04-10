#include "search_algos.h"
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
			return (mid);
		if (array[mid] < value)
			return (binary_search_a(array, mid + 1, end, value));
		if (array[mid] > value)
			return (binary_search_a(array, start, mid - 1, value));
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located else -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, high;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	high = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, high);
	return (binary_search_a(array, i / 2, high, value));
}
