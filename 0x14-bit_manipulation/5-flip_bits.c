#include "main.h"
/**
 * flip_bits - number of bits you would need to flip
 * @n: number
 * @m: number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int index = 0;
	unsigned long int a;

	a = n ^ m;
	while (a != 0)
	{
		if ((a & 1) == 1)
			index++;
		a = a >> 1;
	}
	return (index);
}
