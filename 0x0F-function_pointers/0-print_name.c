#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && *name != '\0' && f != 0)
		f(name);
}
