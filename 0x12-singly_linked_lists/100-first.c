#include <stdio.h>

void __attribute__((constructor)) run_first(void);

/**
 * run_first - Prints a string before the
 *        main function is executed.
 */
void run_first(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
