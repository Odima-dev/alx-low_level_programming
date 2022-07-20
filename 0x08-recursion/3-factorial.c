#include "main.h"

/**
 * factorial - issues factorial
 * @n: the number
 * Return: factor or -1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (n * factorial(n - 1));
}
