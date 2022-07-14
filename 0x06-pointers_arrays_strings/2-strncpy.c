#include "main.h"

/**
 * _strncpy - copies sources into buffer destination
 * @dest: destination
 * @src: source
 * @n: number of bytes to be copied
 * Return: the string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
