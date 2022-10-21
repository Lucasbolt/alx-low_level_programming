#include <stdio.h>

/**
 * runfirst - run before the main function
 */
void __attribute__((constructor)) runfirst(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
