#include <stdio.h>
#include <unistd.h>

/*
 ** _putchar - writes the character c to stdout
 ** oc: The character to print
 ** Return: on success 1
 ** On error, -1 is returnrd, and is set appropriately.
 **/

int _putchar(char c)
{
			return (write(1, &c, 1));
}
