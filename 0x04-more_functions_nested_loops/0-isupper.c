#include "main"
/**
 * _isupper - to check for uppercase
 * @c: character that is checked
 * Return: either 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
