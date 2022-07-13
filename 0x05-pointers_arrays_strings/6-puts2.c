#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - puts string two times
 * @str: string to be put
 */

void puts2(char *str)
{
	int i = 0;

	for (i = 0; i < _strlen(str); i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
