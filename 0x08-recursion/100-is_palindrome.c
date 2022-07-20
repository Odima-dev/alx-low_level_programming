#include "main.h"

/**
 * compare - does comparison
 * @head: starts from left
 * @tail: starts from right
 * Return: 1 or 0
 */

int compare(char *head, char *tail)
{
	if (head >= tail)
		return (1);
	if (*head == *tail)
		return (compare(head + 1, tail - 1));

	return (0);
}

/**
 * _strlen - determine length of string
 * @s: the string
 * Return: the length
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + (_strlen(s)));
}

/**
 * is_palindrome - checks palindrome
 * @s: the string
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (compare(s, (s + len - 1)));
}
