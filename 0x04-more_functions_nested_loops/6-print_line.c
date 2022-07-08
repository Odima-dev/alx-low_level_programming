#include "main.h"

/**
 * print_line - print the line
 * @n: integer to draw
 */

void print_line(int n)
{
	int times = n;

	for (times = n; times > 0; times--)
		_putchar('_');

	_putchar('\n');
}
