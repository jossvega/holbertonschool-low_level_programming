#include <stdio.h>

void print_some(void) __attribute__((constructor));

/**
 *print_some - prints a msg before the main
 */

void print_some(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
