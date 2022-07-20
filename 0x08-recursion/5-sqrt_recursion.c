#include "main.h"

/**
 * find_root - returns square root
 * @n: the integer
 * @root: to be tested
 * Return: square root or -1
 */

int find_root(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (find_root(n, root + 1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_root(n, 0));
}
