#include <stdio.h>
/**
 *
 *  * main - check the code
 *
 *   *
 *
 *    * Return: Always 0.
 * *     */

#include "main.h"

int main(void)
{
	int n;

	n = get_endianness();
	if (n != 0)
	{
		printf("Little Endian\n");
	}
	else
	{
		printf("Big Endian\n");
	}
	return (0);
}
