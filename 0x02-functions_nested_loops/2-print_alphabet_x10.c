#include "main.h"

/**
 * print_alphabet_x10 - will print lowercase alphabet 10 times
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	char al;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
		_putchar('\n');
	}
}
