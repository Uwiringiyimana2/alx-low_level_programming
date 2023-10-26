#include "main.h"
/**
 * set_bit - sets the value of a bit to 1
 * @n: pointer to a number
 * @index: index
 * Return: 1 if it worked; -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int b;

	if (n == 0)
		return (-1);
	if ((sizeof(unsigned int) * 8) < index)
		return (-1);
	b = 1;
	b = b << index;
	*n = *n | b;
	return (1);
}
