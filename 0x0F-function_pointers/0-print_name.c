#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - display a name
 * @name: name will be stored here
 * @f: it points to the function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
