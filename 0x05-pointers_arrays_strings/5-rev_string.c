#include "main.h"

/**
 * _strlen - return strings length
 * @s: string to be returned
 * @Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

void rev_string(char *s)
{
	
