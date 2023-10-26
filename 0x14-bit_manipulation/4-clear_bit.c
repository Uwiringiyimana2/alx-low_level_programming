#include "main.h"
/**
 * clear_bit - sets te value of a bit to 0 at a given index
 * @n: pointer to number
 * @index: index
 * Return: 1 success or -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned int) * 8))
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
