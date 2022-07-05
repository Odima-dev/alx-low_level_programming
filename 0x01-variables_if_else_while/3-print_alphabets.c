#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z') /*prints in lowercase*/
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z') /*prints in uppercase*/
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');

	return (0);
}
