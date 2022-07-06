#include "main.h"
/**
 * _islower - to check for lowercase
 * @c - character for comparison
 * Return 1 0r 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
