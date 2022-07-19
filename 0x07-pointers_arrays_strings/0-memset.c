#include "main.h"

/**
 * _memset - will set memory to array
 * @s: points memory area
 * @b: constant value
 * @n: bytes number
 * Return: memory's area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
