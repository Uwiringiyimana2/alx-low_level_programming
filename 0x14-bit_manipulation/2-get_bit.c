#include "main.h"
/**
 * get_bit - returns value of a bit at a given index
 * @n: number
 * @index: index of the bit you want to get
 * Return: the value of the bit at index or -1 if an error occur
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if ((sizeof(unsigned long int) * 8) < index)
		return (-1);
	n = n >> index;
	return (n & 1);
}
