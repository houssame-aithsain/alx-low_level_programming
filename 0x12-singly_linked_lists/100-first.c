#include "lists.h"

/**
 * constructor_tec - Constructor function executed before main
 *
 * Description: This function is executed automatically before the main
 *              function is called. It prints a message to the console.
 */
void constructor_tec(void) __attribute__((constructor));

void constructor_tec(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
