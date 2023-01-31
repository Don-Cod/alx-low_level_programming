#include <stdio.h>

void firts(void)_attribute_((consrtuctor));

/**
 * first - prints a sentence before the main
 * function is executed
 */
void first(void)
{
	printf("you're beat! and yet, you must allow, \n");
	printf("I bore my house upon my back!\n");
}
