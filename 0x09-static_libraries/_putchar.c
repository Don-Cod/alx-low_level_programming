#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to be printed.
 *
 * Return - on success return 1
 * Return - on error return -1
 *
 * errno is set appropriately
 **/
int _putchar(char c)
{
	return (write(1, &c, 1));

