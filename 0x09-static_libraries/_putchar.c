#include "main.h"
#include <unistd.h>

/**
 * _putchar - Write the character c to stdout
 * @c: The character to be printed.
 *
 * Return - On success return 1
 * Return - On error return -1.
 *
 * errno is set appropriately
 **/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
