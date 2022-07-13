#include "main.h"

/**
 * swap_int - performs the swap
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
