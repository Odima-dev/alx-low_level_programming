#include "main.h"

/**
 * _strncat - concat the arrays
 * @dest: the destination
 * @src: the source
 * @n: number of time to append
 * Return: char value
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
