#include <stdio.h>
/**
 * main - Print the name of the executable file
 * @argc: Argument count
 * @argv: Array of argument strings
 *
 * Return: 0 for succesful exit
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return 0;
}
