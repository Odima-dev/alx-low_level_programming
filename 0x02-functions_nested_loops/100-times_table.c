#include "main.h"
/**
 * print_times_table - print multiplication table up to n
 * @n: integer argument
 */
void print_times_table(int n)
{
	int i;

	if (n > 98}
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}

	} else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
