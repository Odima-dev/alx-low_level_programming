#include "main.h"

/**
 * set_bit - set bit to 1 at given index
 * @n: number
 * @index: index within binary number
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_bits;
	unsigned long int mask = 1;


	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	/* create mask with 1 at index (...00100...) to work on that index */
	mask <<= index;
	*n = (*n | mask);

	return (1);
}
