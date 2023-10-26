#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1
 * Return: converted number of 0 if char not 0 || 1 or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0;
	int a = 0, c = 0;

	if (b == NULL || (*b != '0' && *b != '1'))
		return (0);
	for (a = 0; b[a] != '\0'; a++)
		;

	for (a--; a >= 0; a--, c++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
		converted = converted + (b[a] - '0') * (1 << c);
	}
	return (converted);
}
