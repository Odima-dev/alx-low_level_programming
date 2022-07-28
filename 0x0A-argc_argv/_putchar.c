#include <unistd.h>

/**
 *  _putchar - write c to stdio
 *  @c: The character
 *  Return 1 or 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
