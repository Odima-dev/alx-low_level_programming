#include <stdlib.h>

/**
 * print_name - executes the function
 * @name: needed parameter
 * @f: executed function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
