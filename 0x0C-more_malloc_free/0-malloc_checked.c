#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - memory allocation
 *  @b: malloc size
 *  Return: malloc pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
