#include "main.h"
/**
 * get_endianness - checks endianness
 * Return: 0 -big endisn; 1 - little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int) *c);
}
