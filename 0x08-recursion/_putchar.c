#include <unistd.h>

/**
 * _putchar - main functiion
 * @c: the character
 * Return: always 1 or 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
