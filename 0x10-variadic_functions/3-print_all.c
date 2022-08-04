#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints characters
 * @valist: the list
 */
void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 * print_int - prints integers
 * @valist: the list
 */
void print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
 * print_float - print floats
 * @valist: the list
 */
void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/**
 * print_string - print strings
 * @valist: the list
 */
void print_string(va_list valist)
{
	char *s;

	s = va_arg(valist, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints various stuff
 * @format: char array representing data type to prints
 */
void print_all(const char * const format, ...)
{
	char *separator = "";
	int i, j = 0;
	va_list valist;

	datatype choice[] = { {'c', print_char},
		 {'i', print_int},
		 {'f', print_float},
		 {'s', print_string},
		 {'\0', NULL} };

	va_start(valist, format);
	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (choice[i].letter != '\0')
		{
			if (choice[i].letter == format[j])
			{
				printf("%s", separator);
				choice[i].func(valist);
				separator = ", ";
			}
			i++;
		}
		j++;
	}
	va_end(valist);
	printf("\n");
}
