#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - give string length
 * @s: the string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
		len++, s++;

	return (len);
}

/**
 * argstostr - performs concanation
 * @ac: argc
 * @av: arguments
 * Return: array pointer
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int len = 0, i, j, k = 0;


	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]);
	}
	len += (ac + 1);

	s = malloc(len * sizeof(char));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			s[k++] = av[i][j];
		}
		s[k++] = '\n';
	}
	return (s);
}
