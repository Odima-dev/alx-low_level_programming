#include <stdio.h>

/**
 * execute_before_main - executes the function first
 * Note: made possible by prior declaration
 */
void __attribute__ ((constructor)) execute_before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
