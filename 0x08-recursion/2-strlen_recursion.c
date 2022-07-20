#include "main.h"

/**
 * _strlen_recursion - string length
 * @s: the string
 * Return: length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	s++;
	return (1 + _strlen_recursion(s));
}
