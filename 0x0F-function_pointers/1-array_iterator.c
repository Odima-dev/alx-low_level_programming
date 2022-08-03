#include <stddef.h>
/* defines size_t */

/**
 * array_iterator - executes the function
 * @array: the array
 * @size: array size
 * @action: points executed function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(*(array + i));
}
